#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//ˮ�ɻ�����ÿһλ����λ���ķ��ĺ͵���������
// 153=1^3+5^3+3^3
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�����
		int n = 1;
		int tmp=i;
		while (tmp /= 10)
		{
			n++;
		}
		//ÿһλ��
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
