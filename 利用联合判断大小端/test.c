#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int system()
{
	union
	{           //在联合体中 这两个变量公用一份空间
		char a; //那么 这份空间多大呢 — 取最大的空间为联合体的公共空间
		int b;  //所以 当吧b赋值1时 四个字节空间表现形式为 00 00 00 01
	}u;         //然后 因为两个公用一份空间 第一个字节数就是a的值
	u.b = 1;    //根据大小端的存储规则 若 在空间里表现为01 00 00 00(小端)
	return u.a; //则a的值就为1   若 表现为00 00 00 01(大端) a的值就为0
}               //根据a的返回值判断是大端还是小端
int main()
{
	int ret = system();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}