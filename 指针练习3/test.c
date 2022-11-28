#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[4] = { 1,2,3,4 };
	int* pa = (int*)(&arr + 1);//&arr去首元素地址 +1加一个数组长度
	int* pa1 = (int*)((int)arr + 1);//强制类型转化为一个整数 (int)arr当前值就是整数 
	                                //整数+1 就是地址加一 移动一个字节
	   //原本在内存中arr是 ：01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
	      //移动一个字节    |  | 移动到这里再向后找四个字节 在调转 就变成了 02 00 00 00
	printf("%x %x\n", pa[-1], *pa1);  //4 2000000 
	                //pa[-1]==*(pa-1)上一道题写过了 在强调一遍
	return 0;
	//不知道为啥vs运行不出来结果
}