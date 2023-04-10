with open("dile.txt","r",encoding="utf-8") as f:
    for line in f:
        line = line.strip()
        my_list = list(line.split(","))# 去除最后的“\n”
        print(type(my_list),my_list)
        if my_list[4] == "测试":
            continue
        else:
            with open("bill.txt","a",encoding="utf-8") as x:
                x.write(f"{line}\n")
