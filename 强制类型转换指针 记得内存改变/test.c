#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};/*int整形占4个字节*/
	short* p = (short*)arr;/*short短整型占2个字节(强制类型转换)*/
	int i;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//拓展
//int main()
//{
//	int a = 0x11223344;    /*在内存中a的存放是以 44 33 22 11 形势存放的，其中 44 占一个字节*/
//	char* p = (char*)&a;   /*强制转化为char占1个字节*/
//	*p = 0;                /*将第一个字节赋值0*/
//	printf("%x\n", a);
//	return 0;
//}