#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_nit_one(int n )
	/*�ж�һ�����ڴ����ж���1*/
{
	int count=0;
	while (n)
	{
		n = n & (n - 1);              //������������>    n=n&(n-1)     if n=13
		//"&"��ı��ʽ ��0Ϊ0; ͬ1��1;                  1101 & 1100 = 1100
		count++;                      //                 1100 & 1011 = 1000
	}                                 //                 1000 & 0111 = 0000        n=0 ���� ��ִ��������
	return count;
}
int git_diff_bit(int m, int n)
//�ж����������ڴ����ж���λһ��
{
	int tmp = m ^ n;
	/*"^"�����ʽ��ͬ��ͬΪ0; ��ͬΪ1;*/
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