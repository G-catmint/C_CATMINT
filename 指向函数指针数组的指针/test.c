#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x+y;
}
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//p是一个数组指针
	int(*p1)(int, int);//p1是一个函数指针
	int(*pr[4])(int, int)=&p1;//pr是一个函数指针数组
	int(*((*ppr)[4]))(int, int) = &pr;//ppr是一个指向函数指针数组的指针
	return 0;
}