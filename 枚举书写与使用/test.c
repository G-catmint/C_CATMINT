#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Color
{
	RED,
	YELLOW=8,
	GREEN,
	BLUE
};
int main()
{
	enum Color c = RED;
	c = 5;    //c���Կ������� ���Ǹĳ�.cpp��c++�ļ���Ͳ���������
	//ԭ����c������Ϊ enum Color ����5��������Ϊint���Բ����Ը�ֵ��c
	//YELLOW = 5;   ������ֵ���ɸı�
	printf("%d\n", c);
	printf("%d %d %d %d\n", RED, YELLOW, GREEN, BLUE);
	return 0;
}