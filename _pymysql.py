from pymysql import Connection

conn = Connection(                 # mysql
    host="localhost",       # 主机名
    port=3306,              # 端口
    user="root",            # 账户
    password="lzJ110011?"   # 密码
)

# print(conn.get_server_info())
cursor = conn.cursor()
conn.select_db("world")      # 打开表
cursor.execute("select * from orange")
result = cursor.fetchall()
for i in result:
    print(i)

conn.close()