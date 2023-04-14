class Student:
    name = None
    age = None

    def student_def(self):
        print(f"我的名字是{self.name},年龄{self.age}")


stu = Student()
stu.name = "Molia"
stu.age = 22
stu.student_def()