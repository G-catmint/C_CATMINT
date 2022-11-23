#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_nit_one(int n )
	/*判断一个数内存中有多少1*/
{
	int count=0;
	while (n)
	{
		n = n & (n - 1);              //——————>    n=n&(n-1)     if n=13
		//"&"与的表达式 有0为0; 同1得1;                  1101 & 1100 = 1100
		count++;                      //                 1100 & 1011 = 1000
	}                                 //                 1000 & 0111 = 0000        n=0 跳出 共执行了三次
	return count;
}
int git_diff_bit(int m, int n)
//判断两个数在内存中有多少位一样
{
	int tmp = m ^ n;
	/*"^"异或表达式相同相同为0; 不同为1;*/
	return count_nit_one(tmp);
}
int main()
{
	int m;
	int n;
	scanf("%d%d", &m, &n);
	int count = git_diff_bit(m, n);
	printf("%d\n", count);
	return 0;
}