import socket
socket_client = socket.socket()
socket_client.connect(("localhost", 8888))
while True:
    msg = input("输入发送给服务端的信息")
    if msg == "exit":
        break
    socket_client.send(msg.encode("utf-8"))
    recv_data = socket_client.recv(1024).decode("utf-8")
    if recv_data == "exit":
        break
    print(f"收到的来自服务端的消息{recv_data}")
socket_client.close()