"""
Filter函数功能：过滤想要的数据进行保留
"""

from pyspark import SparkConf, SparkContext
import os

os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rdd = sc.parallelize([1, 2, 3, 4, 5, 6])
print(rdd.filter(lambda a: a % 2 == 1).collect())
print(rdd.filter(lambda a: a % 2 == 0).collect())