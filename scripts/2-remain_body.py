import cv2
import numpy as np
import matplotlib.pyplot as plt

# 이미지 로드
image_path = '/mnt/data/image.png'
image = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)

# 이진화
_, binary_image = cv2.threshold(image, 240, 255, cv2.THRESH_BINARY)

# 연결된 컴포넌트 찾기
num_labels, labels, stats, centroids = cv2.connectedComponentsWithStats(binary_image, connectivity=8)

# 가장 큰 컴포넌트 찾기
max_label = 1 + np.argmax(stats[1:, cv2.CC_STAT_AREA])

# 가장 큰 컴포넌트만 남기기
body_image = (labels == max_label).astype(np.uint8) * 255

# 머리 부분 제거하기
# 컴포넌트의 바운딩 박스를 사용하여 상단 부분 분리
x, y, w, h = stats[max_label, cv2.CC_STAT_LEFT:cv2.CC_STAT_HEIGHT]
head_part_height = int(h * 0.3)  # 높이의 상단 30%를 머리 부분으로 간주
body_image[:y + head_part_height, :] = 0

# 결과 시각화
fig, axs = plt.subplots(1, 2, figsize=(12, 6))

axs[0].imshow(binary_image, cmap='gray')
axs[0].set_title('Original Binary Image')

axs[1].imshow(body_image, cmap='gray')
axs[1].set_title('Body Part Extracted')

plt.show()
