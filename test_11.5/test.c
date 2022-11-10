#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;  //把首元素地址传给了pulPtr 
	*(pulPtr + 3) += 3;//*(pulPtr+3)=*(pulPtr+3)+3 所以*(pulPtr+3)值发生了改变 我们可以计算出*(pulPtr+3)是pulPtr[3]=6 改成了12
	printf("%d %d\n", *pulPtr, *(pulPtr + 3)); // printf("%d %d\n",pulArray[0],pulArray[3]);
	return 0;
}