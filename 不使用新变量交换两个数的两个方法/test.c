#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//这两种方法效率低 不建议使用

int main()
此方法若a与b数值过大 a的值容易溢出 a只有32位比特位
{
	int a = 5;
	int b = 3;
	a = a + b;/*a=8*/
	b = a - b;/*b=8-3=5*/
	a = a - b;/*a=8-5=3*/
	printf("a=%d,b=%d", a, b);
	return 0;
}
int main()
{
	int a=3;
	int b=5;
	/*‘^’为异或符号：相同为0，不同为1*/
	a = a ^ b;/*011^101=110*/
	b = a ^ b;/*110^101=011*/
	a = a ^ b;/*110^011=101*/
	printf("a=%d b=%d", a, b);
	return 0;
}