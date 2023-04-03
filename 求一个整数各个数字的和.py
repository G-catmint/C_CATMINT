# 求一个整数各个数字的和
num = input("请输入一个整数：")
sum = 0
for x in num:
    x=int(x)
    sum+=x
print(sum)

# 反素数
def prime_number(num):
    # num = int(num)
    for i in range(1,num):
        if num % 2 == 0:# 不是素数
            return 0
    else:# 是素数
        return 1

num = int(input("请输入一个数字："))
i = 0
while i!=10:
    a = prime_number(num)
    n = str(num)
    m = int(n[::-1])
    b = prime_number(m)
    if num != m:
        if a == 1:
            if b == 1:
                print(num)
                i += 1
    num += 1
print("结束")