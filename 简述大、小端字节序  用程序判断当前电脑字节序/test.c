#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//简述：
//大端(储存)模式:是指数据的低位保存在内存的高地址中,而数据的高位,保存在内存的低地址中;
//小端(储存)模式:是指数据的高位保存在内存的低地址中,而数据的低位,保存在内存的高地址中;
int check_sys()
{
	int a = 1;
	return (char*)&a;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("大端");
	}
	else
	{
		printf("小端");
	}
	return 0;
}