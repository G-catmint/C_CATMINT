#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int a[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}
void print(int a[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}
void reverse(int a[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp=a[right];
		a[right] = a[left];
		a[left] = temp;
		right--;
		left++;
	}
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	//init(a,sz);/*��ʼ������Ϊ0*/
	reverse(a, sz);/*���������*/
	print(a, sz);/*�������*/
	return 0;
}