#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//——————————————————————————————————————————————————————
//下面这两条代码是用来实现qsort的
void Swap(char* buf1, char* buf2,int wide)
{
	//wide是为了使元素全部交换
	//如：若你是int类型 char字符只能交换一个字节的字符 剩下三个字节的字符没动 就会导致输出错误
	for (int i = 0; i < wide; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void*arr, int sz, int wide, int(*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp_int((char*)arr + j * wide, (char*)arr + (j + 1) * wide) > 0)
		//为什么强制类型转化为char： 因为由于使用者不一定使用的是什么变量 所占内存不确定 所以都转化为占 1 个字节的char
		//转化成char后 乘上 sizeof() 就等于把变量所需的内存定义出来了
			{
				Swap((char*)arr + j * wide, (char*)arr + (j + 1) * wide,wide);//传 wide(变量大小) 是为了交换字节数符合要求
			}
		}
	}
}
//———————————————————————————————————————————————————————
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
int main()
{
	test1();
	return 0;
}