import threading
import pybind11_playground
import time

def f(i):
    print('sleep start')
    if i == 0:
        time.sleep(3)
    else:
        pybind11_playground.toyclass().sleep(3)
    print('sleep end')

for i in range(2):
    thread = threading.Thread(target=f, args=(i,))
    thread.start()
    print('hello')
    thread.join()

'''
sleep start
hello
sleep end
sleep start
sleep end
hello # pybind11_playground.toyclass().sleep(3) blocks executing main-thread's hello
'''
