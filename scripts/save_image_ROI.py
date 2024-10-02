import os
import cv2
from tqdm import tqdm

def process(dir_path):

    # 이미지가 저장된 폴더 경로
    input_dir = os.path.join(dir_path, 'images')
    output_dir = os.path.join(dir_path, 'images_ROI')

    print(f'Processing in dir:{input_dir}')
    # ROI 좌표 설정 (시작 x, 시작 y, 너비 w, 높이 h)
    # 예를 들어 좌표가 (50, 50)에서 시작해서 100x100 크기의 영역을 자르려면
    roi_x, roi_y, roi_w, roi_h = 320, 100, 600, 450

    # output 디렉토리가 없으면 생성
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    # 이미지 파일들을 처리
    list = os.listdir(input_dir)
    for filename in tqdm(os.listdir(input_dir)):
        if filename.endswith(('.png', '.jpg', '.jpeg')):  # 이미지 파일 포맷에 맞게 확장자 설정
            img_path = os.path.join(input_dir, filename)

            # 이미지 읽기
            img = cv2.imread(img_path)

            if img is not None:
                # ROI 설정 (y:y+h, x:x+w)
                roi = img[roi_y:roi_y + roi_h, roi_x:roi_x + roi_w]

                # 새로운 이미지 파일 저장 경로
                output_path = os.path.join(output_dir, filename)

                # ROI 이미지 저장
                cv2.imwrite(output_path, roi)
                # print(f'{filename}의 ROI가 {output_path}에 저장되었습니다.')
            else:
                print(f'{filename}을(를) 읽을 수 없습니다.')

    print(f'Processing Finish in dir:{output_dir}')


if __name__ == '__main__':
    # define path of directory
    base_dir = '../data/2024-10-01 experiment (0.4mm) test datasets'

    # 이미지 프로세싱 클래스
    # 최상위 폴더 내의 모든 하위 폴더를 탐색
    subfolders = [os.path.join(base_dir, name) for name in os.listdir(base_dir)
                  if os.path.isdir(os.path.join(base_dir, name))]

    for dir_path in subfolders:
        # 폴더 처리 및 결과 저장
        process(dir_path)

print(f'All ROI images are saved')
