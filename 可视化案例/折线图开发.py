import json
from pyecharts.charts import Line
# 美国
f_us = open("E:/python学习工具/资料/可视化案例数据/折线图数据/美国.txt","r",encoding="utf-8")
f_jp = open("E:/python学习工具/资料/可视化案例数据/折线图数据/日本.txt","r",encoding="utf-8")
f_in = open("E:/python学习工具/资料/可视化案例数据/折线图数据/印度.txt","r",encoding="utf-8")

us_skill = f_us.read()
jp_skill = f_jp.read()
in_skill = f_in.read()

us_skill = us_skill.replace("jsonp_1629344292311_69436(","")
jp_skill = jp_skill.replace("jsonp_1629350871167_29498(","")
in_skill = in_skill.replace("jsonp_1629350745930_63180(","")

us_skill = us_skill[:-2]
jp_skill = jp_skill[:-2]
in_skill = in_skill[:-2]

us_data = json.loads(us_skill)
jp_data = json.loads(jp_skill)
in_data = json.loads(in_skill)

us_trend_data = us_data['data'][0]['trend']
jp_trend_data = jp_data['data'][0]['trend']
in_trend_data = in_data['data'][0]['trend']

x_us_data = us_trend_data['updateDate'][:314]
x_jp_data = jp_trend_data['updateDate'][:314]
x_in_data = in_trend_data['updateDate'][:314]

y_us_data = us_trend_data['list'][0]['data'][:314]
y_jp_data = jp_trend_data['list'][0]['data'][:314]
y_in_data = in_trend_data['list'][0]['data'][:314]

line = Line()
line.add_xaxis(x_us_data)

line.add_yaxis('美国确诊人数',y_us_data)
line.add_yaxis('日本确诊人数',y_jp_data)
line.add_yaxis('印度确诊人数',y_in_data)

line.render()
f_us.close()
f_jp.close()
f_in.close()