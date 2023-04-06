student = ("周杰伦",11,["sing","jump","rap","basketball","football"])
hilist = []
age = student.index(11)
print(f"年龄所在的下标{age}")
name = student[0]
print(f"学生姓名{name}")
del student[2][4]
hilist.extend(student[2])
print(hilist)
student[2].append("coding")
print(f"{student}")