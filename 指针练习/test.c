#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* p = (int*)(&arr + 1);//&arr+1 &aȡ������������ĵ�ַ +1������������� ������һ������ָ������ ǿ������ת��������
	//&a ��Ҫ int(*p)[5]���洢��ַ
	printf("%d %d\n", *(arr + 1), *(p - 1));//arr+1 ��Ԫ�ص�ַ+1�ڽ����� 
	return 0;
}