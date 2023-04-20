# __str__使用方法 ：将原本内容直接输出
# __lt__使用方法 ：直接将两个对象进行比较是不行的，但用__lt__可以实现
# __le__使用方法 ：主要用于 “<=” 和 “>=” 的判断
# __eq__使用方法 ：是否相等

class Student:
    # __init__
    def __init__(self, name, age):
        self.name = name
        self.age = age
    # __str__
    def __str__(self):
        return f"name = {self.name},age = {self.age}"
    # __lt__
    def __lt__(self, other):
        return self.age < other.age
    # __le__
    def __le__(self, other):
        return self.age <= other.age
    def __eq__(self, other):
        return self.age == other.age


stu1 = Student("张三", 20)
stu2 = Student("李四", 40)
print(stu1)
print(str(stu1))

print(stu1 > stu2)
print(stu1 >= stu2)

print(stu1 == stu2)