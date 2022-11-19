#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 9;
	float* pfloat = (float*)&a;
	printf("a的值为：      %d\n", a);
	printf("*pfloat的值为：%f\n",*pfloat);
	*pfloat = 9.0;
	printf("a的值为：      %d\n", a);
	printf("*pfloat的值为：%f\n", *pfloat);
	return 0;
}