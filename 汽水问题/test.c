#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void buy(int a,int sum)
{
	if (a != 0)
	{
		sum += a;
		buy(a /= 2,sum);
	}
	else
	printf("%d\n", sum);
}
int main()
{
	int a;//ÂôÆûË®Æ¿Êı
	int sum = 0;
	scanf("%d", &a);
	buy(a, sum);
	return 0;
}
