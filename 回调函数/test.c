#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(char*str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("����Ь\n");
	p("�����");
}
int main()
{
	test(print);
	return 0;
}