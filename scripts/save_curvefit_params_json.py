import os
import cv2
import numpy as np
import pandas as pd
import json
from scipy.optimize import curve_fit
import matplotlib.pyplot as plt
from rgb_binary_skeleton_curvefit import RBSC
from tqdm import tqdm

# 디렉토리 생성 함수
def create_directory(directory_path):
    if not os.path.exists(directory_path):
        os.makedirs(directory_path)
        print(f"Directory {directory_path} created.")
    else:
        print(f"Directory {directory_path} already exists.")

folder_path = os.path.join('../data/2024-08-06/2024-08-06-11-15-16 payload-X test')
image_path = os.path.join(folder_path, 'images')
# 결과를 저장할 디렉토리 생성
output_directory_name_body = 'images_crop_body'
output_directory_name_body = os.path.join(folder_path, output_directory_name_body)
create_directory(output_directory_name_body)

output_directory_name_skeleton = 'images_skeleton'
output_directory_name_skeleton = os.path.join(folder_path, output_directory_name_skeleton)
create_directory(output_directory_name_skeleton)

output_directory_name_lb = 'images_largest_backbone'
output_directory_name_lb = os.path.join(folder_path, output_directory_name_lb)
create_directory(output_directory_name_lb)

# 폴더의 이미지를 순차적으로 읽고 결과를 저장하는 함수
def process_folder(dir_path, rbsc: RBSC):
    results_poly4d = []
    results_poly3d = []
    results_log = []
    results_poly4d_sigmoid = []

    list = os.listdir(dir_path)
    sorted_list = sorted(list, key=lambda x: int(os.path.splitext(x)[0]))
    for filename in tqdm(sorted_list):
        if filename.lower().endswith(('.png', '.jpg', '.jpeg', '.bmp', '.tiff')):
            img_path = os.path.join(dir_path, filename)
            coef1, coef2, coef3, coef4 = rbsc.process(img_path)
            if coef1 is not None:
                results_poly4d.append({'Image Filename': filename, 'Coefficients': coef1.tolist()})
                results_poly3d.append({'Image Filename': filename, 'Coefficients': coef2.tolist()})
                results_log.append({'Image Filename': filename, 'Coefficients': coef3.tolist()})
                results_poly4d_sigmoid.append({'Image Filename': filename, 'Coefficients': coef4.tolist()})

            img_save_path = os.path.join(output_directory_name_body, filename)
            cv2.imwrite(img_save_path, rbsc.body_image)
            img_save_path = os.path.join(output_directory_name_skeleton, filename)
            cv2.imwrite(img_save_path, rbsc.skeleton)
            img_save_path = os.path.join(output_directory_name_lb, filename)
            cv2.imwrite(img_save_path, rbsc.largest_backbone_image)

    # 결과를 JSON 파일로 저장
    with open(folder_path + '/' + 'curve_fit_result-poly4d.json', 'w') as f:
        json.dump(results_poly4d, f)
    with open(folder_path + '/' + 'curve_fit_result-poly3d.json', 'w') as f:
        json.dump(results_poly3d, f)
    with open(folder_path + '/' + 'curve_fit_result-log.json', 'w') as f:
        json.dump(results_log, f)
    with open(folder_path + '/' + 'curve_fit_result-poly4d_sigmoid.json', 'w') as f:
        json.dump(results_poly4d_sigmoid, f)

    return results_poly4d, results_poly3d, results_log, results_poly4d_sigmoid

# 이미지 프로세싱 클래스
rbsc = RBSC()

# 폴더 처리 및 결과 저장
results = process_folder(image_path, rbsc)

# 결과 출력
print(results)
