#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
////����ָ��ı��
//{
//	int a = 0;
//	int* pa = &a;               /*��*���ǽ����ò�����*/
//	int** ppa = &pa;/*ppa���Ƕ���ָ��*/
//	int*** pppa = &ppa;/*��������*/ 
//	**ppa = 30;
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", ppa);
//	return 0;
//}

int main()
//ָ������ ���ָ�������
{
	int a = 10;
	int b = 20;
	int c = 30;
	//��������Ҫ����������������
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������顪���������
	//�ַ����顪������ַ�
	//ָ�����顪�����ָ��
	int*arr[3] = { &a,&b,&c };
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}