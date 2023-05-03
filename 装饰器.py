def outer(func):
    def inner():
        print("我睡觉了")
        func()
        print("我起床了")
    return inner
@outer
def sleep():
    import random
    import time
    print("睡眠中...")
    time.sleep(random.randint(1,5))

sleep()

# fin1 = outer(sleep)
# fin1()