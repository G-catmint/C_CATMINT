from typing import Union
my_list:list[Union[str,int,bool]] = ["Molia", 50, True]


def func(data:Union[int,str])->Union[int,str]:
    pass

func()