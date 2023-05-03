from file_define import TextFileReader, TextJsonReader
from pymysql import Connection
from 设置类型Recond import Recond


text_file_reader = TextFileReader("E:/python学习工具/2011年1月销售数据.txt")
text_json_reader = TextJsonReader("E:/python学习工具/2011年2月销售数据JSON.txt")

file_data: list[Recond] = text_file_reader.read_file()
json_data: list[Recond] = text_json_reader.json_read()

data_all = file_data + json_data

conn = Connection(
    host="localhost",
    port=3306,
    user="root",
    password="lzJ110011?",
    autocommit=True
)

cursor = conn.cursor()
conn.select_db("py1test")
# cursor.execute("create table orders(order_data int,order_id varchar(50),order_money int,order_province varchar(10))")
for record in data_all:
    sql = f"insert into orders(order_data,order_id,order_money,order_province)" \
          f"values('{record.data}','{record.order_id}',{record.money},'{record.province}');"
    cursor.execute(sql)
conn.close()