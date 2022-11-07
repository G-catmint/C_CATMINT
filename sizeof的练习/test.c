#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	////一维数组
	//int a[] = { 1,2,3,4 };        //我写的---答案
	//printf("%d\n", sizeof(a));      //16 —— 16   计算的是数组总大小 4*4
	//printf("%d\n", sizeof(a+0));    //4  —— 4/8  数组名这里表示首元素地址 a+0还是首元素地址
	//printf("%d\n", sizeof(*a));     //4  —— 4    数组名就是首元素地址 被*解引用 *a就是首元素
	//printf("%d\n", sizeof(a+1));    //4  —— 4/8  数组名就是首元素地址 a+1是第二个元素的地址
	//printf("%d\n", sizeof(a[1]));   //4  —— 4    第二个元素大小
	//printf("%d\n", sizeof(&a));     //4  —— 4/8  &a表示数组的地址 但是数组地址也是地址 只要是地址就是4/8
	//printf("%d\n", sizeof(*&a));    //4  —— 16   同理 &a是数组地址 但是被*解引用了 就表示整个数组 
	//printf("%d\n", sizeof(&a+1));   //4  —— 4/8  又来了 这又是一个地址 是地址就是4/8  &a+1表示跳过了一个数组
	//printf("%d\n", sizeof(&a[0]));  //4  —— 4/8  是地址就是4/8  第一个元素的地址
	//printf("%d\n", sizeof(&a[0]+1));//4  —— 4/8  是地址就是4/8  也跳过了一个数组

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//strlen
	//printf("%d\n", strlen(arr));      //随机 —— 随机 strlen是求字符串长度已知数到"\0" 这串字符没有"\0"结尾 所以是一个随机值 直到在内存中找到"\0"
	//printf("%d\n", strlen(arr+0));    //随机 —— 随机 首元素地址一直往后找"\0" 所以也是随机值
	////printf("%d\n", strlen(*arr));     //随机 —— error 首元素地址解引用就是'a'把a当成了地址 a的ASCII是96 访问的地址就是0x00000061 报错
	////printf("%d\n", strlen(arr[1]));   //随机 —— error 
	//printf("%d\n", strlen(&arr));     //随机 —— 随机
	//printf("%d\n", strlen(&arr+1));   //随机 —— 随机值-6 &arr取得是整个数组的地址 +1 也就是跳过了一个数组
	//printf("%d\n", strlen(&arr[1]+1));//随机 —— 随机值-1 &arr[0]取得的是首元素地址 +1 跳过了首元素地址
	//sizeof
	//printf("%d\n", sizeof(arr));      //6 —— 6   sizeof计算的是数组的大小 6*1
	//printf("%d\n", sizeof(arr+0));    //4 —— 4/8 数组名是首元素地址 是地址就是4/8
	//printf("%d\n", sizeof(*arr));     //1 —— 1   解引用了 有是问的元素大小 char一个字节 元素大小就是1
	//printf("%d\n", sizeof(arr[1]));   //1 —— 1   第二个元素大小
	//printf("%d\n", sizeof(&arr));     //4 —— 4/8 是地址就是4/8
	//printf("%d\n", sizeof(&arr+1));   //4 —— 4/8 是地址就是4/8
	//printf("%d\n", sizeof(&arr[0]+1));//4 —— 4/8 是地址就是4/8
	return 0;
}