"""
演示Python递归操作
需求:通过递归，找出一个指定文件夹内的全部文件
思路:写一个函数，列出文件夹内的全部内容，如果是文件就收集到list如果是文件夹，就递归调用自己，再次判断。
"""
import os
# def test_os():
#     print(os.listdir("E:/test"))        # 列出路径下的内容
#     print(os.path.isdir("E:/test/a"))   # 判断指定路径是不是文件夹
#     print(os.path.exists("E:/test"))    # 判断指定路径是否存在

def get_files_recursion_from_dir(path):
    file_list = []
    if os.path.exists(path):
        for f in os.listdir(path):
            new_path = path + '/' + f
            if os.path.isdir(new_path):
                file_list+=get_files_recursion_from_dir(new_path)
            else:
                file_list.append(new_path)
    else:
        print(f"指定目录{path}不存在")
        return []

if __name__ == '__main__':
    print(get_files_recursion_from_dir("E:/python学习工具"))