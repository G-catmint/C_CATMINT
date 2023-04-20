class Phone:
    __is_5G_enable = False

    def __check_5G(self):
        if self.__is_5G_enable:
            print("5g开启")
        else:
            print("5g关闭,使用4g网络")

    def call_by_5G(self):
        self.__check_5G()
        print("正在通话中")


phone = Phone()
phone.call_by_5G()