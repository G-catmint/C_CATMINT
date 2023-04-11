from pyecharts.charts import Bar,Timeline
from pyecharts.options import LabelOpts
from pyecharts.globals import ThemeType
from pyecharts.options import TitleOpts,LabelOpts

f = open("E:/python学习工具/资料/可视化案例数据/动态柱状图数据/1960-2019全球GDP数据.csv", "r", encoding="GB2312")
data_line = f.readlines()
f.close()
data_line.pop(0)
data_dict = {}
for line in data_line:
    year = int(line.split(",")[0])
    name = line.split(",")[1]
    GDP = float(line.split(",")[2])
    try:
        data_dict[year].append([name, GDP])
    except Exception as e:
        data_dict[year] = []
        data_dict[year].append([name, GDP])

timeline = Timeline({"theme": ThemeType.PURPLE_PASSION})

sorted_year_list = sorted(data_dict.keys())
for year in sorted_year_list:
    data_dict[year].sort(key=lambda element:element[1],reverse=True) # 将全部的GDP进行排序就是sort函数
    data_year = data_dict[year][0:8] # 只取前八大的GDP
    x_data = []
    y_data = []
    for i in data_year:
        x_data.append(i[0])
        y_data.append(i[1]/100000000)
    bar = Bar()
    x_data.reverse() # 让GDP较大的较长
    y_data.reverse() # 让GDP有长想短排
    bar.add_xaxis(x_data)
    bar.add_yaxis("GDP(亿)", y_data, label_opts=LabelOpts(position="right"))
    bar.reversal_axis() # 调转x y 的位置

    timeline.add(bar, str(year))
    bar.set_global_opts(
        title_opts=TitleOpts(title=f"{year}年全球GDP前8变化")
    )
#
timeline.add_schema(
    play_interval=500,
    # is_inverse=True,
    is_timeline_show=True,
    is_auto_play=True,
    is_loop_play=False
)

timeline.render("GDP动态柱状图.html")