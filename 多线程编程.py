"""
threading模块
import threading
thread_obj = threading.Thread([group[,target[,arg[,kwargs[,name]]]]])
-group:暂时无用，未来功能的预留参数
-target:执行的目标任务名
-args:以元组的方式给执行任务传参
-kwargs:以字典的方式给执行任务传参
-name：线程名，一般不用设置

# 启动线程，让线程开始工作
thread_obj.start()
"""
import time
import threading
def sing(mas):
    while 1:
        print(mas)
        time.sleep(1)
def dance(mas):
    while 1:
        print(mas)
        time.sleep(1)

if __name__ == '__main__':
    sing_threading = threading.Thread(target=sing,args=("我爱唱歌，啦啦啦啦...",))
    dance_threading = threading.Thread(target=dance,kwargs={"mas":"我爱跳舞，驾驾驾驾..."})
    sing_threading.start()
    dance_threading.start()