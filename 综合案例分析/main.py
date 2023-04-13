from file_define import TextFileReader,TextJsonReader
from pyecharts.charts import Bar
from pyecharts.options import *
from pyecharts.globals import ThemeType


text_file_reader = TextFileReader("E:/python学习工具/2011年1月销售数据.txt")
text_json_reader = TextJsonReader("E:/python学习工具/2011年2月销售数据JSON.txt")

file_data = text_file_reader.read_file()
json_data = text_json_reader.json_read()

data_all = file_data + json_data

# date_line = {"2001-01-01"}
data_dict = {}
for date_line in data_all:
    if date_line.data in data_dict.keys():
        data_dict[date_line.data] += date_line.money
    else:
        data_dict[date_line.data] = date_line.money


bar = Bar(init_opts=InitOpts(theme=ThemeType.LIGHT))
bar.add_xaxis(list(data_dict.keys()))
bar.add_yaxis("销售额",list(data_dict.values()),label_opts=LabelOpts(is_show=False))
bar.set_global_opts(
    title_opts=TitleOpts(title="每日销售总额")
)

bar.render()