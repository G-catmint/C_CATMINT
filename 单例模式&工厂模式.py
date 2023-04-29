class Person():
    pass
class Worker(Person):
    pass
class Student(Person):
    pass
class Teacher(Person):
    pass

class Personfactory():
    def personwork(self,p_type):
        if p_type == "w":
            return Worker
        elif p_type == "s":
            return Student
        else:
            return Teacher

pf = Personfactory()
worker = pf.personwork("w")
stu = pf.personwork("s")
teacher = pf.personwork("t")