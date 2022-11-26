#define _CRT_SECURE_NO_WARNINGS 1
// 回调函数 实现 冒泡排序
#include<stdio.h>
#include<stdlib.h>// 快速排序 qsort 的头文件 —— 这一篇的主角
#include<string.h>// 比较字符串大小用 strcmp 的头文件
//————————————————————————————————————
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
	//若e1>e2 返回大于 0 的数字
	//若e1=e2 返回 0
	//若e1<e2 返回小于 0 的数字
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//—————————————————————————————————————
int cmp_float(const void* e1, const void* e2)
{
//	return *(float*)e1 - *(float*)e2;
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	// 看不懂这里的话   详情见笔记第 6 页
	for (int i = 0; i < sz; i++)
	{
		printf("%0.1f ", f[i]);
	}
	printf("\n");
}
//————————————————————————————————————
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
void test3()
{
	struct Stu s[3] = { {"zhangsan",30},{"lisi",35},{"wangwu",18} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age/*name*/);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ",s[i]);
	}
}
//————————————————————————————————————
int main()
{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"张三",30},{"李四",35},{"王五",18} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	test1();
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	test2();
	test3();
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//   }
	return 0;
}