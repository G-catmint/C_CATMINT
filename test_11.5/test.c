#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;  //����Ԫ�ص�ַ������pulPtr 
	*(pulPtr + 3) += 3;//*(pulPtr+3)=*(pulPtr+3)+3 ����*(pulPtr+3)ֵ�����˸ı� ���ǿ��Լ����*(pulPtr+3)��pulPtr[3]=6 �ĳ���12
	printf("%d %d\n", *pulPtr, *(pulPtr + 3)); // printf("%d %d\n",pulArray[0],pulArray[3]);
	return 0;
}