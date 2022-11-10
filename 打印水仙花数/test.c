#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//水仙花数：每一位与他位数的方的和等于他本身
// 153=1^3+5^3+3^3
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//求个数
		int n = 1;
		int tmp=i;
		while (tmp /= 10)
		{
			n++;
		}
		//每一位数
		int sum = 0;
		tmp = i;
		do
		{
			sum += pow(tmp % 10, n);
		} while (tmp /= 10);
		if (i == sum)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}
