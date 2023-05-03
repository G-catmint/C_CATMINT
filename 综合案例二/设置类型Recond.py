class Recond:
    def __init__(self, data, order_id, money, province):
        self.data = data
        self.order_id = order_id
        self.money = money
        self.province = province

    def __str__(self):
        return f"{self.data},{self.order_id},{self.money},{self.province}"