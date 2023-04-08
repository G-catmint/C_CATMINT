name = "传智播客"
stock_price = 19.99
stock_code = "003032"
stock_price_daily_growth_factor = 1.2
grow_days = 7
now_price = stock_price*stock_price_daily_growth_factor**grow_days
print(f"公司：{name},股票代码：{stock_code},当前股价：{stock_price}")
print("每日增长系数：%f，经过%d天的增长后，股价达到了：%.2s"% (stock_price_daily_growth_factor,grow_days,stock_price*stock_price_daily_growth_factor**grow_days))