my_string = "Molia is Momo king"
count = my_string.count("Mo")
print(f"字符串中'Mo'出现了{count}次")
new_my_string = my_string.replace(" ","|")
print(new_my_string)
new_my_list = new_my_string.split("|")
print(new_my_list)