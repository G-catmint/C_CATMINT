#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组指针——指向数组的指针
//函数指针——指向函数的指针——存放函数地址的指针

//int Add(int a, int b)
//{
//	return a + b;	
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int(*pa)(a, b) = Add;
//	printf("%d\n", (*pa)(a,b));
//	return 0;
//}

void print(char* p)
{
	printf("%s\n", p);
}
int main()
{
	char(*p)(char*) = print;
	(*p)("hello bit");
}