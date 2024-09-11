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
```
# train
python LSTM_train.py

# show
python LSTM_train.tensorboard.py

# predict (test)
python LSTM_predict.py
```

## Run ROS2 node
### Segment(Joint) Angle Publisher
```
# build & source
colcon build --symlink-install
. install/setup.bash

# run
ros2 run estimation_pkg segment_angle_estimator

# launch
ros2 launch estimation_pkg _launch.py
```

### External Force Publisher (TBD)
