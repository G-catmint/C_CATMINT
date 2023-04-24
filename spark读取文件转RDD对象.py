from pyspark import SparkContext,SparkConf

conf = SparkConf().setMaster("local[*]").setAppName("test_spark_app")
sc = SparkContext(conf=conf)

rdd = sc.textFile("E:/python/python-learning/pyspark/spark_test.txt")

print(rdd.collect())