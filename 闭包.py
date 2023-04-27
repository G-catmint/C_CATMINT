# def outer(logo):
#     def inner(msg):
#         print(f"<{logo}><{msg}><{logo}>")
#     return inner
# fn1 = outer("Molia")
# fn1("NO.1")
# fn1("is god")

def account_create(initial_amount=0):
    def stm(num,deposit=True):
        nonlocal initial_amount
        if deposit:
            initial_amount+=num
            print(f"存入{num}元，当前余额为{initial_amount}元")
        else:
            initial_amount-=num
            print(f"取出{num}元，当前余额为{initial_amount}元")
    return stm

fin1 = account_create(500)
fin1(50)
fin1(100,False)