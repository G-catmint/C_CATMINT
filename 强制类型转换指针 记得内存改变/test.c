#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};/*int����ռ4���ֽ�*/
	short* p = (short*)arr;/*short������ռ2���ֽ�(ǿ������ת��)*/
	int i;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//��չ
//int main()
//{
//	int a = 0x11223344;    /*���ڴ���a�Ĵ������ 44 33 22 11 ���ƴ�ŵģ����� 44 ռһ���ֽ�*/
//	char* p = (char*)&a;   /*ǿ��ת��Ϊcharռ1���ֽ�*/
//	*p = 0;                /*����һ���ֽڸ�ֵ0*/
//	printf("%x\n", a);
//	return 0;
//}