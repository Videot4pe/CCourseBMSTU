import ctypes
lib = ctypes.CDLL('C://libfunc.dll')
start = lib.start
start.argtypes = (ctypes.c_int)
start(10)
