#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int(*p[4])(int, int) = { Add,Sub,Mul,Div };/*����ָ������*/
// p����[4]���ȷ����һ������  ��ͨ��int(*    )(int,int)ȷ�������еĳ�Ա�Ǻ���ָ��
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", p[i](2, 3));
	}
	return 0;
}