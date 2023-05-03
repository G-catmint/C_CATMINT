import json
from pymysql import Connection
conn = Connection(
    host="localhost",
    port=3306,
    user="root",
    password="lzJ110011?",
    autocommit=True
)
cursor = conn.cursor()
conn.select_db("py1test")
cursor.execute("select * from orders")
results = cursor.fetchall()
f = open("E:/python/python-learning/综合案例返向读取/json写入文件数据库内容", "w", encoding="utf-8")
list_all_sql = []
dict_sql = {}
for i in results:
    list_sql = list(i)
    dict_sql["date"] = list_sql[0]
    dict_sql["order_id"] = list_sql[1]
    dict_sql["money"] = list_sql[2]
    dict_sql["province"] = list_sql[3]
    str_sql = str(dict_sql)
    # list_all_sql.append(dict_sql)
    # str_all_sql = str(list_all_sql)
    # J = json.dumps(str_all_sql)
    # f.write(J)
    f.write(str_sql+"\n")
conn.close()
f.close()