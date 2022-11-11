#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char a;   //在结构体中 第一个元素的偏移量是0
	int b;    //其他数组对齐到对齐数的整数倍       4/8->4
	char c;   //对齐数=编译器默认对齐数与该成员大小的较小值 1/8->1
	double d; //
}; //a000bbbbc0000000dddddddd   "0"为浪费掉的空间 
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//24
	return 0;
}