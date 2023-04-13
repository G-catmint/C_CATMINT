from pyecharts.charts import Map
from pyecharts.options import VisualMapOpts, TitleOpts
import json

f = open("E:/python学习工具/资料/可视化案例数据/地图数据/疫情.txt", "r", encoding="utf-8")
data = f.read()
f.close()
city_data = json.loads(data)
city_confirm = city_data['areaTree'][0]['children'][24]['children']
city_list = []
for city_children in city_confirm:
    city_name = city_children['name']+'市'
    city_total = city_children['total']['confirm']
    city_list.append((city_name,city_total))

map = Map()
map.add("吉林省疫情地图",city_list,"吉林")


map.set_global_opts(
    title_opts=TitleOpts(title="吉林疫情地图"),
    visualmap_opts=VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces=[
            {"min": 1, "max": 9, "label": "1-9人", "color": "#53eff3"},
            {"min": 10,  "max": 99, "label": "10-99人", "color": "#f6f29d"},
            {"min": 100, "max": 499, "label": "100-499人", "color": "#f1a522"},
            {"min": 500, "max": 999, "label": "500-999人", "color": "#f25807"},
            {"min": 1000, "max": 9999, "label": "1000-9999人", "color": "#f20715"},
            {"min": 10000, "label": "10000+人", "color": "#80050c"}
        ]
    )
)

map. render("吉林省疫情地图.html")