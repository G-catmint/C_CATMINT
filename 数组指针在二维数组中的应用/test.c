#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int (*p)[5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
//			printf("%d ", *(*(p + i) + j));               //�Ҳ�̫�������д�� �������� ����P35
			printf("%d ", (*(p + i))[j]);//p+i��ʾp�����ַ��p=&arr�� ����i��ʾ�ƶ���i������ĳ��� ʵ�������3����ͬ����
		}                                //[j] ��ʾ�� (p+i) ��һ�е�j����ͬԪ�� �����ס�����ָ�롿��ʽһ��
		printf("\n");                                                             /*(*p)[5]*/
	}
}
int main()
//������ָ�� ��ӡ ��ά����
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}