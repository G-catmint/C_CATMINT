"""
flatmap函数的作用是将 .flatmap 前的内容 进行解除嵌套的操作
"""

from pyspark import SparkConf,SparkContext
import os
os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("create rdd")
sc = SparkContext(conf=conf)

rdd = sc.parallelize(["a b c", "a b c", "a b c"])
print(rdd.flatMap(lambda a:a.split(" ")).collect())
