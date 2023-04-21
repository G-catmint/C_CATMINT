"""
distinct函数：对RDD数据进行去重 返回新的RDD
"""

from pyspark import SparkConf, SparkContext
import os
os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rdd = sc.parallelize([1, 2, 2, 3, 2, 4, 5, 2, 3, 6]).distinct()
print(rdd.collect())