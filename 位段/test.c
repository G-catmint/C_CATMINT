#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//λ��
struct S  //λ�ε��������ض���һ�� ����� ����int
{
	int a : 2;   //������int��С�Ŀռ䡪4���ֽ� ������a b c d
	int b : 5;   //4���ֽ�32��bitλ a��2��bitλ b��5��bitλ c��10��bitλ ��ʣ15��bitλ
	int c : 10;  //dռ30��bitλ ʣ�µ�15����̫λ���� �����˷ѵ���15��bitλ �ڿ���һ��int�ռ�
	int d : 30;  //�ڿ���һ�����οռ�32��bitλ ��d ʣ��2��bitλ �˷ѵ� ���������������οռ� 8���ֽ�
};               //ע������������������ֲ������32��
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//8���ֽ�
	return 0;
}