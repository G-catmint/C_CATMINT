"""
re 模块
match，search，findall三个基础使用方法
"""
import re
s = 'python is Molia godMolia'

reach1_match = re.match('python',s)
reach2 = re.match('Molia',s)
print(reach1_match)
print(reach2)
print(reach1_match.span())
print(reach1_match.group())
# re.search(匹配规则，被匹配字符串)
# 搜索整个字符串,找出匹配的。从前向后,找到第一个后，就停止,不会继续向后
reach_search = re.search('Molia',s)
print(reach_search)
print(reach_search.span())
print(reach_search.group())
# re.findall(匹配规则，被匹配字符串)
# 匹配整个字符串,找出全部匹配项
reach_findall = re.findall('Molia',s)
print(reach_findall)