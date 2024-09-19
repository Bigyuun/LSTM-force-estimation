import subprocess
import webbrowser
import time
import os

# TensorBoard 명령어 실행
# logdir = '../fit/20240807-185538'
logdir = os.path.join('..', 'fit', '20240919-143504')
subprocess.Popen(['tensorboard', '--logdir', logdir, '--port', str(6006)])

# TensorBoard가 시작될 때까지 대기
time.sleep(1)

# 기본 브라우저에서 TensorBoard URL 열기
url = 'http://localhost:6006/'
webbrowser.open(url)
