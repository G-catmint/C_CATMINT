#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 9;
	float* pfloat = (float*)&a;
	printf("a��ֵΪ��      %d\n", a);
	printf("*pfloat��ֵΪ��%f\n",*pfloat);
	*pfloat = 9.0;
	printf("a��ֵΪ��      %d\n", a);
	printf("*pfloat��ֵΪ��%f\n", *pfloat);
	return 0;
}