from pyspark import SparkConf,SparkContext

conf = SparkConf().setMaster("local[*]").setAppName("test_spark_app")
sc = SparkContext(conf=conf)
rdd = sc.parallelize([1,2,3,4,5,6])
print(rdd.collect())
sc.stop()