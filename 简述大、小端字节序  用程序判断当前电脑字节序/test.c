#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������
//���(����)ģʽ:��ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ��,�����ݵĸ�λ,�������ڴ�ĵ͵�ַ��;
//С��(����)ģʽ:��ָ���ݵĸ�λ�������ڴ�ĵ͵�ַ��,�����ݵĵ�λ,�������ڴ�ĸߵ�ַ��;
int check_sys()
{
	int a = 1;
	return (char*)&a;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("���");
	}
	else
	{
		printf("С��");
	}
	return 0;
}