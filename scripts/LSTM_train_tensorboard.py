import subprocess
import webbrowser
import time

# TensorBoard 명령어 실행
logdir = 'logs/fit/'
subprocess.Popen(['tensorboard', '--logdir', logdir])

# TensorBoard가 시작될 때까지 대기
time.sleep(5)

# 기본 브라우저에서 TensorBoard URL 열기
url = 'http://localhost:6006/'
webbrowser.open(url)
