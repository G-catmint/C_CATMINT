#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	char a;   //�ڽṹ���� ��һ��Ԫ�ص�ƫ������0
	int b;    //����������뵽��������������       4/8->4
	char c;   //������=������Ĭ�϶�������ó�Ա��С�Ľ�Сֵ 1/8->1
	double d; //
}; //a000bbbbc0000000dddddddd   "0"Ϊ�˷ѵ��Ŀռ� 
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));//24
	return 0;
}