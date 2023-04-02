mylist = [1,2,3,4,5,6,7,8,9,10]
ulist = []
i = 0
while i < len(mylist):
    num = mylist[i]
    if num%2 == 0:
        ulist.append(num)
    i+=1
print(ulist)


ulist = []
for x in mylist:
    if x%2 == 0:
        ulist.append(x)
print(ulist)