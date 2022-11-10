#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int a, int n)
{
	int rec=0;
	int sum=0;
	int i;
	for (i = 0; i < n; i++)
	{
		rec = rec * 10 + a;
		sum += rec;
	}
	return sum;
}
int main()
{
	int a;
	int n;
	scanf("%d %d", &a,&n);
	printf("%d\n",Add(a, n));
	return 0;
}