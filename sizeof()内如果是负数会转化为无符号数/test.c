#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i;      /*全局变量:全局变量未定义数时为0*/
int main()
{
	i--;
//i--=-1
//在内存中以补码储存
//11111111111111111111111111111111
///*转化为无符号类第一个1从符号位转化为数值 变成正数——正数原码.反码.补码都一样*/
	if (i > sizeof(i))
//sizeof()中为负数时将转化为无符号类型
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}