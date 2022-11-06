#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//整数在内存中都是以二进制的补码存在的

//123想取每一位数 123%10  123/10循环下去

int main()
{
	int a;
	int count=0;
	scanf("%d", &a);

////这个方法算不了负数
//	while (a)
//	{
//		if (a % 2 == 1)/*如果是奇数就能在二进制中留下个1*/
//			count++;
//		a = a / 2;/*除以2看看下一次是奇数还是偶数*/
//	}
	
	int i;
	for (i = 1; i <= 32; i++)
	{
		/*'&'是与，有0为0；全1得1*/
		/*'>>'将内存中二进制右移i位*/
		if ((a >> i) & 1 == 1)
			count++;
	}
	printf("内存中二进制有%d个1", count);
	return 0;
}