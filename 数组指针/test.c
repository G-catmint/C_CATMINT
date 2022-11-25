#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char* arr[5];
//	char*(* pa)[5] = &arr;    //先与"*"结合 确定是一个指针  在与"[10]"结合 确定是一个存放数组的指针
//	printf("%s", pa);        //在在前面引用char* 表示 pa 指向数组的 元素类型 所以必须是char*(*pa)
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	/*正常人写法:
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *p + i);
	}*/

	int(*p)[10] = &arr;    /*&arr —— 数组地址*/
	for (int i = 0; i < 10; i++)
	{
	//	printf("%d ", *(* p + i));
		printf("%d ", (*p)[i]);
	}
	return 0;
}