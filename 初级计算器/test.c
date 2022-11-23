#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("                            \n");
	printf("    1.Add     2.Sub         \n");
	printf("    3.Mul     4.Div         \n");
	printf("         0.exit             \n");
	printf("                            \n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input;
	int x;
	int y;
	int(*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择一种计算方式： ");
		scanf("%d", &input);
		if (input > 0 && input <= 5)
		{
			printf("输入两个你想要计算的数据： ");
			scanf("%d %d", &x, &y);
			printf("输出： %d\n", p[input](x, y));
		}
		else if (input == 0)
		{
			printf("退出  \n");
		}
		else
		{
			printf("输入错误；\n");
		}
	} while (input);
	return 0;
}