#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x+y;
}
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//p��һ������ָ��
	int(*p1)(int, int);//p1��һ������ָ��
	int(*pr[4])(int, int)=&p1;//pr��һ������ָ������
	int(*((*ppr)[4]))(int, int) = &pr;//ppr��һ��ָ����ָ�������ָ��
	return 0;
}