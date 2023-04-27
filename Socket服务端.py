import socket
# 设置socket对象
socket_server = socket.socket()
# 绑定本机IP和端口 内容输入tuple元组
socket_server.bind(("localhost",8888))
# 监听端口
socket_server.listen(1)
# listen方法内接受一个整数传参，表示接受的连接数量
# 等待客户端链接
# result:tuple = socket_server.accept() # 返回了一个二元元组
# conn = result[0]                      # conn接收元组的第一个元素
# address = result[1]                   # 同理接收第二个元素
conn, address = socket_server.accept()
# conn address 分别表示链接对象，和客户端地址信息
# accept()方法：是阻塞的方法，是等待客户端的链接，如果没有连接，就会阻塞在这
print(f"接收客户端的链接，客户端的信息是{address}")
while True:
    # 接收客户信息 要使用服务端和客户端的本次连接对象 而非 socket_server 对象
    data:str = conn.recv(1024).decode("utf-8")
    if data =="exit":
        break
    # recv 接收的参数是缓冲区大小 一般用1024即可
    # recv 的返回值是一个字节数组也就是bytes对象而不是字符串 可以通过decode方法通过utf-8进行解码 将字节数组转化为字符串对象
    print(f"客户端发来的消息是{data}")
    # 发送回复消息
    msg = input("请输入你想要和客户端回复的消息").encode("utf-8")
    if msg == "exit":
        break
    # encode将你要传回客户端的字符串转化为字节数组
    conn.send(msg)
# 关闭连接
conn.close()
socket_server.close()