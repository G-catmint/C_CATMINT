from 综合案例分析 import Recond
import json

# 设置父类 对于 普通文件
class FileReader:
    def read_file(self)->list[Recond]:
        pass

# 细化父类功能 传入文件路径 由__init__接受
class TextFileReader(FileReader):
    def __init__(self,path):
        self.path = path
# 按行读取文件中的内容
    def read_file(self) ->list[Recond]:
        f = open(self.path,"r",encoding="utf-8")
        record_list = []
        for line in f:
            line = line.strip()
            data_list = line.split(",")  # recond为类Recond的类型
            recond = Recond(data_list[0],data_list[1],int(data_list[2]),data_list[3])
            record_list.append(recond)
        f.close()
        return record_list  # 返回类型list类型

# 设置父类 对于 json文件
class JsonRead:
    def json_read(self)->list[Recond]:
        pass


class TextJsonReader(JsonRead):
    def __init__(self,path):
        self.path = path

    def json_read(self) -> list[Recond]:
        f = open(self.path,"r",encoding="utf-8")
        record_list = []
        for line in f.readlines():
            data_dict = json.loads(line)
            record = Recond(data_dict["date"], data_dict["order_id"], data_dict["money"], data_dict["province"])
            record_list.append(record)

        f.close()
        return record_list


if __name__ == '__main__':
    text_file_reader = TextFileReader("E:/python学习工具/2011年1月销售数据.txt")
    text_json_reader = TextJsonReader("E:/python学习工具/2011年2月销售数据JSON.txt")
    list1 = text_file_reader.read_file()
    list2 = text_json_reader.json_read()
    list_all = list1+list2

    for l_all in list_all:
        print(type(l_all))
        print(l_all)
    # for l1 in list1:
    #     print(l1)
    # for l2 in list2:
    #     print(l2)