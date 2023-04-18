class Clock:
    id = None
    price = None

    def ring(self):
        import winsound
        winsound.Beep(2000,3000)


clo = Clock()
clo.id = 114
clo.price = 514
print(f"闹钟型号为{clo.id},价格为{clo.price}")
clo.ring()