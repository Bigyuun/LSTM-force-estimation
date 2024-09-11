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


## Process
```
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
