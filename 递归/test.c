#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("例：最简单的递归\n");
//	main();
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned /*无符号整形*/int num;
	scanf("%d", &num);
	print(num);	
	return 0;
}