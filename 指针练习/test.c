#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p = (int*)(&arr + 1);//&arr+1 &a取出来的是数组的地址 +1跳出这个数组了 类型是一个数组指针类型 强制类型转化成整形
	//&a 需要 int(*p)[5]来存储地址
	printf("%d %d\n", *(arr + 1), *(p - 1));//arr+1 首元素地址+1在解引用 
	return 0;
}