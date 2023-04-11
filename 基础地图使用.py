
from pyecharts.charts import Map
from pyecharts.options import VisualMapOpts


map = Map()

data = [
    ("北京市", 99),
    ("上海省", 199),
    ("安徽省", 499),
    ("福建省", 699),
    ("云南省", 999),
]

map.add('测试底图', data, 'china')


map.set_global_opts(
    visualmap_opts=VisualMapOpts(
        is_show=True,
        is_piecewise=True,
        pieces=[
            {"min": 1, "max": 9, "label": "1-9人", "color": "#e783bb"},
            {"min": 10,  "max": 199, "label": "10-199人", "color": "#de2b8e"},
            {"min": 200, "max": 399, "label": "200-399人", "color": "#cf9bb8"},
            {"min": 400, "max": 599, "label": "400-599人", "color": "#cb155e"},
            {"min": 600, "max": 799, "label": "600-799人", "color": "#c10b33"},
            {"min": 800, "max": 1000, "label": "800+人", "color": "#c1320b"}
        ]
    )
)

map. render("基础地图.html")