"""
字符串相关工具，内涵：
    函数：str_reverse(s)，接受传入字符串，将字符串翻转返回
    函数：substr(s,x,y)，按照下标x,y，对字符串进行切片
"""

def str_reverse(s):
    return s[::-1]

def substr(s,x,y):
    return s[x:y]

if __name__ == '__main__':
    print(str_reverse("Molia"))
    print(substr("Molia",1,3))
