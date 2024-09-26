# LSTM-force-estimation
Force estimation of continuum(hyper-redundant) manipulator using LSTM.

# Summary
### image processing
![Image Description](https://github.com/Bigyuun/LSTM-force-estimation/blob/main/media/process.png)

### curve extrapolation & curve fit
![Image Description](https://github.com/Bigyuun/LSTM-force-estimation/blob/main/media/process_curvefit.png)

### find joint position and angle of segments
![Image Description](https://github.com/Bigyuun/LSTM-force-estimation/blob/main/media/process_curvefit_fin.png)

### result
![Image Description](https://github.com/Bigyuun/LSTM-force-estimation/blob/main/media/process_result.png)

## Prerequisition
```
# pip module for create virtual environment
sudo apt install python3.xx-venv  # e.g. python3.10-venv (humble)

# make virtual env with --symlink
python3 -m venv {env_name} --system-site-packages --symlinks

source {env_name}/bin/activate

# requirements
pip install -r requirements.txt
```

## Process
```
cd scripts
python postprocess.py
```

## LSTM model

---

<details>
<summary>Post-process of custom data (provided)</summary>

<https://drive.google.com/file/d/1_4A-9XO9phco3tF5dqtNVLMGjcR7xW1V/view?usp=drive_link>
```
mkdir data
wget https://drive.google.com/file/d/1_4A-9XO9phco3tF5dqtNVLMGjcR7xW1V/view?usp=drive_link
cd data
unzip 2024-08-08 experiment.zip
```
Then, enter each subdirectories (e.g. `2024-08-08-13-46-11 upper_init-X`)
and take out `data_LPF_*`, `results/curve_fit_result-joint_angle_*`
to `{PROJECT_DIR}/datasets/train`
(Please check the tree of `datasets` directory on git)

</details>

---
### Train
```
! Check
source {env_name}/bin/activate

# train
cd scripts
python LSTM_train.py

# show
cd scripts
python LSTM_train.tensorboard.py

# predict (test)
cd scripts
python LSTM_predict.py
```

## Run ROS2 node
### Segment(Joint) Angle Publisher
**deactivate virtual_env (for build using ROS python core only)**
```
deactivate
```

**build & source**
```
# If the error `no module named 'em'`, please remove dirctories named 'build', 'install' and 'log'.
colcon build --symlink-install
. install/setup.bash
```
```
# activate virtual_env
source {env_name}/bin/activate
```
```
# run
ros2 run estimation_pkg segment_angle_estimator
```
```
# launch
ros2 launch estimation_pkg _launch.py
```

### External Force Publisher (TBD)
