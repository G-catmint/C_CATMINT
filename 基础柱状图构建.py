from pyecharts.charts import Bar,Timeline
from pyecharts.options import LabelOpts
from pyecharts.globals import ThemeType
bar1 = Bar()
bar1.add_xaxis(['中国','日本','美国'])
bar1.add_yaxis("GDP",[30,50,10],label_opts=LabelOpts(position="right"))
bar1.reversal_axis()

bar2 = Bar()
bar2.add_xaxis(['中国','日本','美国'])
bar2.add_yaxis("GDP",[50,30,50],label_opts=LabelOpts(position="right"))
bar2.reversal_axis()

bar3 = Bar()
bar3.add_xaxis(['中国','日本','美国'])
bar3.add_yaxis("GDP",[90,10,15],label_opts=LabelOpts(position="right"))
bar3.reversal_axis()

timeline = Timeline({"theme": ThemeType.PURPLE_PASSION})
timeline.add(bar1,"点1")
timeline.add(bar2,"点2")
timeline.add(bar3,"点3")

timeline.add_schema(
    play_interval = 2500,
    # is_inverse=True,
    is_timeline_show=True,
    is_auto_play=True,
    is_loop_play=False
)

timeline.render("基础柱状图.html")