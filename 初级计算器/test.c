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
		printf("��ѡ��һ�ּ��㷽ʽ�� ");
		scanf("%d", &input);
		if (input > 0 && input <= 5)
		{
			printf("������������Ҫ��������ݣ� ");
			scanf("%d %d", &x, &y);
			printf("����� %d\n", p[input](x, y));
		}
		else if (input == 0)
		{
			printf("�˳�  \n");
		}
		else
		{
			printf("�������\n");
		}
	} while (input);
	return 0;
}