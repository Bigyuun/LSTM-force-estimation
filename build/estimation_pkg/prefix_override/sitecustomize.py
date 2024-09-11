import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/daeyun/LSTM-force-estimation/install/estimation_pkg'
