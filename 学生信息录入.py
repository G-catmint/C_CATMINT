class Students:
    def __init__(self,name,age,home):
        self.name = name
        self.age = age
        self.home = home

# students_list = []
# students_dict = {}
for i in range(1,11):
    print(f"当前录入第{i}学生信息，总共需录入10位学生信息")
    name = input("请输入学生姓名")
    age = input("请输入学生年龄")
    home = input("请输入学生住址")
    stu = Students(name,age,home)
    print(f"学生{i}信息录入完成,信息为：【学生姓名：{stu.name}，年龄：{stu.age}，住址：{stu.home}】")
