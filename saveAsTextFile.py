from pyspark import SparkConf, SparkContext
import os

os.environ["PYSPARK_PYTHON"] = "E:/python/python3.10.11/python.exe"
os.environ["HADOOP_HOME"] = "E:/python过程学习/大数据/hadoop-3.0.0"
conf = SparkConf().setMaster("local[*]").setAppName("test_spark")
sc = SparkContext(conf=conf)

rdd1 = sc.parallelize([1, 2, 3, 4, 5, 6])
rdd2 = sc.parallelize([("hello", 6), ("world", 9)])
rdd3 = sc.parallelize([[1, 2, 3], [4, 5, 6], [7, 8, 9]])

rdd1.saveAsTextFile("E:/python/python-learning/pyspark/output1")
rdd2.saveAsTextFile("E:/python/python-learning/pyspark/output2")
rdd3.saveAsTextFile("E:/python/python-learning/pyspark/output3")