"""
map函数用来将 .map 前的内容用过map()中的函数内容返回回来 只能传一个数返回一个数
"""

from pyspark import SparkConf, SparkContext
import os
os.environ['PYSPARK_PYTHON'] = "E:/python/python3.10.11/python.exe"

conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)
rdd = sc.parallelize([1, 2, 3, 4, 5, 6])
rdd2 = rdd.map(lambda x: x*10)
print(rdd2.collect())