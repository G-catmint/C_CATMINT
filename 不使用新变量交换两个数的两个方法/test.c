#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����ַ���Ч�ʵ� ������ʹ��

int main()
�˷�����a��b��ֵ���� a��ֵ������� aֻ��32λ����λ
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
	/*��^��Ϊ�����ţ���ͬΪ0����ͬΪ1*/
	a = a ^ b;/*011^101=110*/
	b = a ^ b;/*110^101=011*/
	a = a ^ b;/*110^011=101*/
	printf("a=%d b=%d", a, b);
	return 0;
}