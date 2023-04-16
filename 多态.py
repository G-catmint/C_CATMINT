class AC:
    def cold_wind(self):
        pass

    def hot_wind(self):
        pass

    def swing_l_r(self):
        pass


class Midea_AC(AC):
    def cold_wind(self):
        print("1号制冷功能")

    def hot_wind(self):
        print("1号制热功能")

    def swing_l_r(self):
        print("1号左右吹风")


class Gree_AC(AC):
    def cold_wind(self):
        print("2号制冷功能")

    def hot_wind(self):
        print("2号制热功能")

    def swing_l_r(self):
        print("3号左右吹风")


def AC_cold(ac: AC):
    ac.cold_wind()


midea = Midea_AC()
gree = Gree_AC()

AC_cold(midea)
AC_cold(gree)