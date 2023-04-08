money = 5000000
def nemu():
    print("——————————————————————————————")
    print("—————— 1.查询余额   2.存款——————")
    print("—————— 3.取款      4.退出——————")
    print("——————————————————————————————")

def inquire():
    print(f"您当前余额为{money}")

def depost():
    print("存款服务：")
    num = int(input("请输入您要存入的金额："))
    global money
    money+=num
    inquire()

def wthdraw():
    print("取款服务：")
    num = int(input("请输入您要取出的金额："))
    global money
    if money-num<0:
        print(f"余额不足，当前余额为{money}")
        return
    else:
        money -= num
    inquire()

input("请输入您的真实姓名")
while 1:
    nemu()
    x = int(input("请选择所需功能"))
    if x == 1:
        inquire()
    elif x == 2:
        depost()
    elif x == 3:
        wthdraw()
    elif x == 4:
        print("您已退出，欢迎下次光临")
        break
    else:
        print("输入错误，请重新选择")
        continue