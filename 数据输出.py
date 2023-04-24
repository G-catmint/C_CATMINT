"""
collect算子：将RDD各个分区的数据，统一收集到Driver中，形成一个list对象
reduce算子：对RDD数据集按照你传入的逻辑进行聚合
take算子：取RDD的前N个元素，组合成list返回给你
count算子：计算rdd有多少条数据，返回值是一个数字
"""

from pyspark import SparkConf, SparkContext
import os
os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rdd = sc.parallelize([1, 2, 3, 4, 5, 6]).reduce(lambda a, b: a*b)
rdd1 = sc.parallelize([1, 2, 3, 4, 5, 6]).take(3)
num_rdd = sc.parallelize([1, 2, 3, 4, 5, 6]).count()
print(rdd)
print(rdd1)
print(num_rdd)