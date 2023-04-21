"""
文件处理相关工具，内涵：
    函数：print_file_info(file_name)，接受传入模块的路径，打印文件的全部内容，如文件不存在则捕获异常，输出提示信息，通过finally关闭文件对象
    函数：append_to_file(file_name,data)，接收文件路径以及传入数据，将数据追加写入到文件中
"""
from typing import TextIO


def print_file_info(file_name):
    f = None
    try:
        f = open(file_name,"r",encoding="utf-8")
        for i in f:
            i = i.strip()
            print(i)
    except Exception as e:
        print("错误信息提示：",e)
    finally:
        if f:
            f.close()

def append_to_file(file_name,data):
    """
    将指定数据追加到指定文件中：
    :param file_name:指定的文件
    :param data:指定的数据
    :return:无
    """
    with open(file_name,"a",encoding="utf-8") as f:
        f.write(data)

if __name__ == '__main__':
    print_file_info("E:/python/python-learning/custom_tool_packs/test.txt")
    append_to_file("E:/python/python-learning/custom_tool_packs/test.txt","Molia")