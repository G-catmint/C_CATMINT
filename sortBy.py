"""
sortBy函数：给予你指定的排序依据 对RDD进行排序
"""

from pyspark import SparkConf, SparkContext
import os

os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rdd = sc.textFile("E:/python/python-learning/pyspark/Stray Birds.txt")\
    .flatMap(lambda x: x.split(" "))\
    .map(lambda a: (a,1)).reduceByKey(lambda a,b:a+b).\
    sortBy(lambda a: a[1], ascending=False, numPartitions=1)
print(rdd.collect())


# .sortBy(lambda a: a["money"], ascending=False, numPartitions=1)