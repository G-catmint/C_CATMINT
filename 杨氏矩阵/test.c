#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int matrix(int arr[3][3], int a, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > a)
		{
			y--;
		}
		else if (arr[x][y] < a)
		{
			x++;
		}
		else
		{
			*px = x+1;
			*py = y+1;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int a;
	scanf("%d", &a);
	int x = 3;
	int y = 3;
	int ret = matrix(arr, a, &x, &y);
	if (ret==1)
	{
		printf("坐标是%d %d\n", x, y);
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}