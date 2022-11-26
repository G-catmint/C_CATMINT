#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//������������������������������������������������������������������������������������������������������������
//��������������������ʵ��qsort��
void Swap(char* buf1, char* buf2,int wide)
{
	//wide��Ϊ��ʹԪ��ȫ������
	//�磺������int���� char�ַ�ֻ�ܽ���һ���ֽڵ��ַ� ʣ�������ֽڵ��ַ�û�� �ͻᵼ���������
	for (int i = 0; i < wide; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void*arr, int sz, int wide, int(*cmp_int)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp_int((char*)arr + j * wide, (char*)arr + (j + 1) * wide) > 0)
		//Ϊʲôǿ������ת��Ϊchar�� ��Ϊ����ʹ���߲�һ��ʹ�õ���ʲô���� ��ռ�ڴ治ȷ�� ���Զ�ת��Ϊռ 1 ���ֽڵ�char
		//ת����char�� ���� sizeof() �͵��ڰѱ���������ڴ涨�������
			{
				Swap((char*)arr + j * wide, (char*)arr + (j + 1) * wide,wide);//�� wide(������С) ��Ϊ�˽����ֽ�������Ҫ��
			}
		}
	}
}
//��������������������������������������������������������������������������������������������������������������
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
int main()
{
	test1();
	return 0;
}