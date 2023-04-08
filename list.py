mylist = ["Molia","xiaozhong","hgg"]

# 查找莫元素的的下标索引
index = mylist.index("Molia")
print(f"目标索引值为{index}")

# 列表某个元素修改
mylist[2] = "dsg"
print(f"列表修改被修改为:{mylist}")

#在指定位置插入新元素
mylist.insert(1,"==")
print(f"插入新元素后被修改为{mylist}")

#在尾部插入新的元素
mylist.append("hgg")
print(f"在尾部插入后列表变为{mylist}")

#在尾部插入新列表的值
my_list = ["love","小梁莹"]
mylist.extend(my_list)
print(f"在尾部插入新列表后变为{mylist}")

#通过del删除指定下标
del mylist[1]
print(f"用del删除后列表变为{mylist}")

#通过.pop删除指定下标
mylist.pop(1)
print(f"用.pop删除后列表变为{mylist}")

#利用remove删除列表中的一个元素
mylist.remove("dsg")
print(f"删除后列表元素变为{mylist}")

#清空列表
mylist.clear()
print(f"结果被清空了 列表是{mylist}")

mylist = ["Molia","love","小梁莹"]

#统计某元素在列表中的数量
count = mylist.count("小梁莹")
print(f"我心里只有{count}个“小梁莹”")

#统计列表中元素个数
len = len(mylist)
print(f"列表中共有元素{len}个")