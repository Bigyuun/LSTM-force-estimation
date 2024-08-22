import pandas as pd
from glob import glob
import numpy as np
import matplotlib.pyplot as plt

# 여러 개의 CSV와 JSON 파일 경로를 지정합니다.
data_csv = sorted(glob('datasets/train/data_LPF_*.csv'))
curvefit_json = sorted(glob('datasets/train/curve_fit_result-*.json'))

# 모든 CSV 파일을 읽어 리스트에 저장합니다.
csv_dataframes = [pd.read_csv(file) for file in data_csv]

# 모든 JSON 파일을 읽어 리스트에 저장합니다.
json_dataframes = [pd.read_json(file) for file in curvefit_json]

raw_dataframe = pd.concat([df for df in csv_dataframes])
curvefit_dataframe = pd.concat([df for df in json_dataframes])

# 병합된 CSV와 JSON 데이터를 하나의 데이터프레임으로 병합합니다.
data_expanded = pd.concat([raw_dataframe, curvefit_dataframe], axis=1)

# Curve fitting에서 coefficient 배열을 분리
coeff_size = len(data_expanded['Coefficients'].iloc[0])
# Coefficient 배열을 개별 열로 변환
coefficients = np.array(data_expanded['Coefficients'].tolist())
coefficients_df = pd.DataFrame(coefficients, columns=[f'Coeff_{i}' for i in range(coeff_size)])
# 기존 데이터프레임과 Coefficient 개별 열을 합침
final_df = pd.concat([data_expanded.reset_index(drop=True), coefficients_df], axis=1)
# data_expanded = pd.concat([final_dataframe.reset_index(drop=True).drop(columns=['Coefficients']), coefficients_df.reset_index(drop=True)], axis=1)

# 병합된 데이터를 확인합니다.
print(final_df.head())

# 데이터가 준비되었으므로, 이제 모델을 학습할 수 있습니다.
import tensorflow as tf
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.preprocessing import MinMaxScaler
import datetime
from tensorflow.keras.optimizers import Adam
from tensorflow.keras.callbacks import EarlyStopping
import joblib

save_dir = 'fit/'
save_dir = save_dir + datetime.datetime.now().strftime("%Y%m%d-%H%M%S")

# 입력과 출력 데이터 분리
input_columns = ['wire length #0', 'wire length #1', 'loadcell #0', 'loadcell #1'] + [f'Coeff_{i}' for i in range(coeff_size)]
output_columns = ['fx', 'fy']
X = final_df[input_columns].values
y = final_df[output_columns].values

# 데이터 정규화
scaler_X = MinMaxScaler()
scaler_y = MinMaxScaler()
X_normalized = scaler_X.fit_transform(X)
y_normalized = scaler_y.fit_transform(y)

# 학습/검증 데이터 분할
X_train, X_val, y_train, y_val = train_test_split(X_normalized, y_normalized, test_size=0.2, random_state=42)

# 스케일러 저장
joblib.dump(scaler_X, save_dir + 'scaler_X.pkl')
joblib.dump(scaler_y, save_dir + 'scaler_y.pkl')

# 입력 데이터 차원 조정 (LSTM에 맞게)
X_train = np.expand_dims(X_train, axis=-1)
X_val = np.expand_dims(X_val, axis=-1)

# TensorBoard 설정
tensorboard_callback = tf.keras.callbacks.TensorBoard(log_dir=save_dir, histogram_freq=1)

# 조기 종료 설정
early_stopping = EarlyStopping(monitor='val_loss', patience=10, restore_best_weights=True)

# LSTM 모델 구성
model = tf.keras.Sequential([
    tf.keras.layers.Input(shape=(X_train.shape[1], 1)),  # 입력 형식 (입력 차원, 1)
    tf.keras.layers.LSTM(64, return_sequences=True),
    tf.keras.layers.LSTM(64),
    tf.keras.layers.Dense(32, activation='relu'),
    tf.keras.layers.Dense(2)
])

model.compile(optimizer=Adam(learning_rate=0.001), loss='mse', metrics=['mae'])

# 모델 학습
history = model.fit(X_train, y_train, epochs=200, batch_size=64, validation_data=(X_val, y_val), callbacks=[tensorboard_callback], verbose=1)

# 모델 평가
loss, mae = model.evaluate(X_val, y_val, verbose=1)
print(f'Validation Loss: {loss}, Validation MAE: {mae}')

# 모델 저장
model.save(save_dir + 'lstm_model.h5')

# 예측
predicted = model.predict(X_val)

# 결과 역정규화
predicted_original = scaler_y.inverse_transform(predicted)
y_val_original = scaler_y.inverse_transform(y_val)

# 예측값 및 실제값 저장
np.savetxt(save_dir + '/predicted_original.csv', predicted_original, delimiter=',')
np.savetxt(save_dir + '/y_val_original.csv', y_val_original, delimiter=',')

print("예측값:", predicted_original)
print("실제값:", y_val_original)

###################################################################################
# 저장된 모델 로드 예제
loaded_model = tf.keras.models.load_model(save_dir + 'lstm_model.h5')

# 로드된 모델로 예측
loaded_predicted = loaded_model.predict(X_val)
loaded_predicted_original = scaler_y.inverse_transform(loaded_predicted)
print("로드된 모델의 예측값:", loaded_predicted_original)

###################################################################################
import subprocess
import webbrowser
import time

# TensorBoard 명령어 실행
logdir = save_dir
subprocess.Popen(['tensorboard', '--logdir', logdir])

# TensorBoard가 시작될 때까지 대기
time.sleep(5)

# 기본 브라우저에서 TensorBoard URL 열기
url = 'http://localhost:6006/'
webbrowser.open(url)
