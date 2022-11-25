#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int (*p)[5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
//			printf("%d ", *(*(p + i) + j));               //我不太明白这个写法 ———— 详情P35
			printf("%d ", (*(p + i))[j]);//p+i表示p数组地址（p=&arr） 加上i表示移动了i个数组的长度 实现了输出3个不同的行
		}                                //[j] 表示了 (p+i) 这一行的j个不同元素 就像套【数组指针】公式一样
		printf("\n");                                                             /*(*p)[5]*/
	}
}
int main()
//用数组指针 打印 二维数组
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}