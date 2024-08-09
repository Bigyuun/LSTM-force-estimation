import os

# 이미지 파일들이 있는 폴더 경로를 지정합니다.
folder_path = '../data/2024-08-07 experiment/2024-08-07-11-55-24 right_init-O/images'

# 폴더 내의 모든 파일을 가져옵니다.
files = os.listdir(folder_path)

for file_name in files:
    # 파일이 이미지 파일인지를 확인합니다.
    if file_name.endswith('.png'):
        # 기존 파일명에서 'XXXX-' 부분을 제거한 새 파일명을 생성합니다.
        new_file_name = file_name.split('-', 1)[-1]

        # 기존 파일의 전체 경로와 새 파일의 전체 경로를 생성합니다.
        old_file_path = os.path.join(folder_path, file_name)
        new_file_path = os.path.join(folder_path, new_file_name)

        # 파일명을 변경합니다.
        os.rename(old_file_path, new_file_path)

print("파일 이름 변경이 완료되었습니다.")
