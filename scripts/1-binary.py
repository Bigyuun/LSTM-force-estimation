import cv2
import matplotlib.pyplot as plt
import numpy as np

# 이미지 파일 경로
image_path = '567.png'

# 1. 이미지를 그레이스케일로 읽기
gray_image = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)

# 2. 이진화
# 임계값 설정 (예: 127)
thresh_value = 127
_, binary_image = cv2.threshold(gray_image, thresh_value, 255, cv2.THRESH_BINARY)

# 연결된 컴포넌트 찾기
num_labels, labels, stats, centroids = cv2.connectedComponentsWithStats(binary_image, connectivity=8)

# 가장 큰 컴포넌트 찾기
max_label = 1 + np.argmax(stats[1:, cv2.CC_STAT_AREA])

# 가장 큰 컴포넌트만 남기기
body_image = (labels == max_label).astype(np.uint8) * 255



# 결과 출력
plt.figure(figsize=(10, 5))

# 그레이스케일 이미지 출력
plt.subplot(2, 3, 1)
plt.title('Grayscale Image')
plt.imshow(gray_image, cmap='gray')
plt.axis('off')

# 이진화 이미지 출력
plt.subplot(2, 3, 2)
plt.title('Binary Image')
plt.imshow(binary_image, cmap='gray')
plt.axis('off')

plt.subplot(2, 3, 3)
plt.title('Body-only Image')
plt.imshow(body_image, cmap='gray')
plt.axis('off')


plt.show()
