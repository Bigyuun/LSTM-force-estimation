import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import butter, filtfilt

# CSV 파일 읽기
file_path = 'data_sample.csv'  # CSV 파일 경로
data = pd.read_csv(file_path)

# 데이터가 저장된 열 이름 지정
value_column = 'fx'  # 진동 데이터 열 이름
values = data[value_column].values

# 저역통과 필터 적용 함수
def low_pass_filter(data, cutoff_frequency, sampling_rate, order=4):
    nyquist = 0.5 * sampling_rate
    normal_cutoff = cutoff_frequency / nyquist
    b, a = butter(order, normal_cutoff, btype='low', analog=False)
    filtered_data = filtfilt(b, a, data)
    return filtered_data

# 필터 파라미터 설정
cutoff_frequency = 0.2  # 컷오프 주파수 (Hz)
sampling_rate = 30.0  # 샘플링 레이트 (Hz) - 데이터의 샘플링 레이트에 맞게 설정
filtered_values = low_pass_filter(values, cutoff_frequency, sampling_rate)

# 원본 데이터와 필터링된 데이터 시각화
time = np.arange(len(values)) / sampling_rate
plt.figure(figsize=(12, 6))
plt.plot(time, values, label='Original Data', alpha=0.7)
plt.plot(time, filtered_values, label='Filtered Data (LPF)', linewidth=2)
plt.xlabel('Time')
plt.ylabel('Value')
plt.title('Original and Filtered Data')
plt.legend()
plt.grid(True)
plt.show()
