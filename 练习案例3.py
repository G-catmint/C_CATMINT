from pyspark import SparkConf, SparkContext
import os
import json

os.environ["PYSPARK_PYTHON"] = "/usr/local/python3.10.11/bin/python3.10"
os.environ["HADOOP_HOME"] = "/export/server/hadoop-3.3.0"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
conf.set("spark.default.parallelism", "24")
sc = SparkContext(conf=conf)
# 打印输出：热门搜索时间段(小时精度)Top3
rdd = sc.textFile("hdfs://node1:8020/export/python_test/search_log.txt").map(lambda a: a.split("\t")).map(lambda a: (a[0][0:2], 1))\
    .reduceByKey(lambda a, b: a+b).take(3)
print(rdd)
# 打印输出：热门搜索词Top3
rdd1 = sc.textFile("hdfs://node1:8020/export/python_test/search_log.txt").map(lambda a: a.split("\t")).map(lambda a: (a[2], 1))\
    .reduceByKey(lambda a,b:a+b).take(3)
print(rdd1)
# 打印输出：统计黑马程序员关键字在哪个时段被搜索最多
rdd2 = sc.textFile("hdfs://node1:8020/export/python_test/search_log.txt").map(lambda a: a.split("\t"))\
    .filter(lambda a:a[2] == "黑马程序员").map(lambda a:(a[0][0:2],1)).reduceByKey(lambda a,b:a+b)
print(rdd2.collect())
# 将数据转换为JSON格式，写出为文件
sc.textFile("hdfs://node1:8020/export/python_test/search_log.txt").map(lambda a: a.split("\t")) \
    .map(lambda a: {"time": a[0], "usr_id": a[1], "key_word": a[2], "rank1": a[3], "rank2": a[4], "url": a[5]}) \
    .saveAsTextFile("hdfs://node1:8020/export/python_test/test3.txt")