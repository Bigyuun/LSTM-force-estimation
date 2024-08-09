# 이미지가 저장된 디렉토리 경로
import cv2
import os
from natsort import natsorted

# 이미지가 저장된 디렉토리 경로
image_folder = os.path.join('data/2024-08-07 experiment/2024-08-07-11-57-04 nopayload/images')
video_name = 'output_video1.avi'

# 이미지 파일 이름들을 정렬된 리스트로 가져오기
images = [img for img in os.listdir(image_folder) if img.endswith(".png") or img.endswith(".jpg")]
images = natsorted(images)  # 자연스러운 숫자 순서로 파일 이름 정렬

# 첫 번째 이미지로 비디오의 프레임 크기를 설정
frame = cv2.imread(os.path.join(image_folder, images[0]))
height, width, layers = frame.shape

# 초당 프레임 수 (FPS)를 30으로 설정
video = cv2.VideoWriter(video_name, cv2.VideoWriter_fourcc(*'DIVX'), 30, (width, height))

# 이미지들을 비디오로 변환
for image in images:
    video.write(cv2.imread(os.path.join(image_folder, image)))

cv2.destroyAllWindows()
video.release()
