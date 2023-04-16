# 复写
class Phone:
    IDMI = "10001"
    producer = "OPPO"

    def call_by_5G(self):
        print("父类的5G通话")

class Phone2023(Phone):
    producer = "Molia"

    def call_by_5G(self):
        print("子类的5G通话")


phone = Phone2023()
phone.call_by_5G()
print(phone.IDMI)
print(phone.producer)


# 调用父类的同名成员
class MyPhone(Phone):
    producer = "China"
    def call_by_5G(self):
        # 方法1：
        print(f"父类1的一个成员：{Phone.producer}")
        Phone.call_by_5G(self)

        # 方法2：
        print(f"父类??的一个成员：{super().producer}")
        super().call_by_5G()


myphone = MyPhone()
myphone.call_by_5G()