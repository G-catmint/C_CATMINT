#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void overturning(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int i)
{
	assert(arr);  //���� �� �����в���ȥ
	int len = strlen(arr); //len=6
	assert(i < len);  //��ֹ��ɵñ �����ֵ�����ַ������ȣ�������
	overturning(arr,arr+i-1);//��    ����   bacdef
	overturning(arr + i, arr + len - 1);//��  ����  bafedc
	overturning(arr, arr + len - 1);//���巭ת  ����  cdefab
}
int main()
{
	char arr[] = "abcdef";
	int i;
	scanf("%d", &i);
	left_move(arr,i);
	printf("%s\n", arr);
	return 0;
}