#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
////几级指针的表达
//{
//	int a = 0;
//	int* pa = &a;               /*“*”是解引用操作符*/
//	int** ppa = &pa;/*ppa就是二级指针*/
//	int*** pppa = &ppa;/*这是三级*/ 
//	**ppa = 30;
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", ppa);
//	return 0;
//}

int main()
//指针数组 存放指针的数组
{
	int a = 10;
	int b = 20;
	int c = 30;
	//正常我们要将这三个数存起来
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整形数组——存放整形
	//字符数组——存放字符
	//指针数组——存放指针
	int*arr[3] = { &a,&b,&c };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}