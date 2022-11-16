#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印一个13行的菱形
int main()
{
	int line;
	scanf("%d", &line);//7
	int zline = line * 2 - 1;
	int x = zline;
	int y = line;
	while(y)
	{
		int a = y;
		for (a; a > 1; a--)
		{
			printf(" ");
		}
		y--;
		int c;
		for (c=0; c < zline-2*y; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	int c = 0;
	while (line)
	{
		line--;
		int a;
		c++;
		for (a = 0; a < c; a++)
		{
			printf(" ");
		}
		for (int b = 0; b < zline - 2 * a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}