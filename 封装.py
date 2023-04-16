class Phone:
    IMEI = None
    producer = None

    __current_voltage = 1

    def cll_back_5g(self):
        print("欢迎使用5G通讯")
        if self.__current_voltage > 1:
            print("5g通讯已开启")
        else:
            self.__keep_single_core()
            print("由于电量不足 让CPU以单核运行来位置稳定运行")

    def __keep_single_core(self):
        print("让CPU以单核模式运行节省电量")

phone = Phone()
phone.cll_back_5g()
# 开头以 "__" 开头的为私有成员变量 不能被外界访问
# phone.__keep_single_core()