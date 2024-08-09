import numpy as np
import tensorflow as tf
from sklearn.preprocessing import MinMaxScaler
import joblib
import pandas as pd
from glob import glob
import datetime

save_dir = 'results/predicted_results_with_original_' + datetime.datetime.now().strftime("%Y%m%d-%H%M%S") + '.csv'

# 모델 불러오기
model = tf.keras.models.load_model('fit/20240807-185538/lstm_model.h5')

# 스케일러 불러오기
scaler_X = joblib.load('fit/20240807-185538/scaler_X.pkl')
scaler_y = joblib.load('fit/20240807-185538/scaler_y.pkl')

# 여러 개의 테스트용 CSV와 JSON 파일 경로를 지정합니다.
test_csv = sorted(glob('datasets/test/data_*.csv'))
test_json = sorted(glob('datasets/test/curve_fit_result-*.json'))
# 모든 CSV 파일을 읽어 리스트에 저장합니다.
csv_test_dataframes = [pd.read_csv(file) for file in test_csv]

# 모든 JSON 파일을 읽어 리스트에 저장합니다.
json_test_dataframes = [pd.read_json(file) for file in test_json]

# 병합된 테스트용 CSV와 JSON 데이터를 하나의 데이터프레임으로 병합합니다.
test_raw_dataframe = pd.concat([df for df in csv_test_dataframes])
test_curvefit_dataframe = pd.concat([df for df in json_test_dataframes])
test_data_expanded = pd.concat([test_raw_dataframe, test_curvefit_dataframe], axis=1)

# Curve fitting에서 coefficient 배열을 분리
coeff_size = len(test_data_expanded['Coefficients'].iloc[0])
# Coefficient 배열을 개별 열로 변환
coefficients = np.array(test_data_expanded['Coefficients'].tolist())
coefficients_df = pd.DataFrame(coefficients, columns=[f'Coeff_{i}' for i in range(coeff_size)])
# 기존 데이터프레임과 Coefficient 개별 열을 합침
final_test_df = pd.concat([test_data_expanded.reset_index(drop=True), coefficients_df], axis=1)

# 입력 데이터 분리
input_columns = ['wire length #0', 'wire length #1', 'loadcell #0', 'loadcell #1'] + [f'Coeff_{i}' for i in range(coeff_size)]
output_columns = ['fx', 'fy']
X_test = final_test_df[input_columns].values

# 입력 데이터 스케일링
X_test_normalized = scaler_X.transform(X_test)

# 입력 데이터 차원 조정 (모델 입력 형태에 맞게)
X_test_normalized = np.expand_dims(X_test_normalized, axis=-1)
# # 예시 입력 데이터
# example_input = np.array([
#     [0.1, 0.2, 0.3, 0.4] + [0.5] * 4  # 예시로 채운 데이터, 실제 데이터를 사용하세요.
# ])


# 예측
predicted_normalized = model.predict(X_test_normalized)

# 예측값 역정규화
predicted_original = scaler_y.inverse_transform(predicted_normalized)

# 예측 결과를 데이터프레임으로 변환
# predicted_df = pd.DataFrame(predicted_original, columns=['fx', 'fy'])
results_df = final_test_df[output_columns].copy()
results_df[['pred_fx', 'pred_fy']] = predicted_original

# 결과를 CSV 파일로 저장
results_df.to_csv(save_dir, index=False)

print("예측값이 'predicted_results.csv' 파일에 저장되었습니다.")