from pyspark import SparkConf, SparkContext
import os
import json

os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rdd = sc.textFile("E:/python学习工具/城市销售数据.txt").flatMap(lambda a:a.split("|")).map(lambda x:json.loads(x))\
    .map(lambda a:(a['areaName'],int(a['money'])))\
    .reduceByKey(lambda a,b:a+b)\
    .sortBy(lambda a:a[1], ascending=False, numPartitions=1)
print(rdd.collect())
rdd1 = sc.textFile("E:/python学习工具/城市销售数据.txt").flatMap(lambda a:a.split("|")).map(lambda x:json.loads(x))\
    .map(lambda a:a['category']).distinct()
print(rdd1.collect())