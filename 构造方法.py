class Student:
    def __init__(self,name,age,sex,home):
        self.name = name
        self.age = age
        self.sex = sex
        self.home = home
        print(f"我叫{self.name},{self.age}岁，性别{self.sex}，家住在{self.home}")

stu = Student("Molia",18,"男","香港")

print(stu.name)
print(stu.age)
