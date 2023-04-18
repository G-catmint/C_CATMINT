
# 演示单继承
class Phone:
    IDMI = None
    producer = None

    def call_by_4G(self):
        print("4G已开启")

class Phone2022(Phone):
    fice_id = "10001"

    def call_by_5G(self):
        print("5G已开启")


phone = Phone2022()
phone.call_by_5G()
phone.call_by_4G()
print(phone.fice_id,phone.producer)

# 演示多继承
class NFC_reader:
    NFC_type = "12345"
    producer = "HM"

    def NFC_read(self):
        print("NFC读卡功能")

    def NFC_write(self):
        print("NFC写卡功能")

class RenoteControl():
    rc_type = "红外遥控器"

    def control(self):
        print("红外线已开启")
# 将三个类继承到MyPhone这个大类里
class MyPhone(Phone2022,NFC_reader,RenoteControl):
    pass

myphone = MyPhone()
myphone.call_by_5G()
myphone.NFC_write()
myphone.control()
# 两个不同类继承为一类后 有相同的变量名
print(myphone.producer)
# 按照继承顺序读