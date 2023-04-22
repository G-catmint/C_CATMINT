"""
reduceByKey函数的作用是 针对KV型rdd 按照key进行分组 根据提供的聚合逻辑 完成组内数据(Value)的聚合操作
"""

from pyspark import SparkConf,SparkContext
import os
os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rd = sc.parallelize([('a', 1), ('a', 1), ('b', 1), ('b', 3), ('b', 6), ('a', 2)])
result = rd.reduceByKey(lambda a,b:a-b)
print(result.collect())