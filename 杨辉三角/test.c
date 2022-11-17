#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10][10] = { 0 };
	int i;
	int j;
	int b;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
		//打印第一列 1
			{
				a[i][j] = 1;
			}
			if (i == j)
		//打印斜着的 1
			{
				a[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
		//打印内部的累加数字 
			{
				a[i][j] = a[i - 1][j - 1] + a[i-1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (b = 10; b > i; b--)
		{
			//打印空格
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}