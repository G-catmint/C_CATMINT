#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void overturning(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int i)
{
	assert(arr);  //断言 假 就运行不过去
	int len = strlen(arr); //len=6
	assert(i < len);  //防止有傻帽 输入的值大于字符串长度（滑稽）
	overturning(arr,arr+i-1);//左    ——   bacdef
	overturning(arr + i, arr + len - 1);//右  ——  bafedc
	overturning(arr, arr + len - 1);//整体翻转  ——  cdefab
}
int main()
{
	char arr[] = "abcdef";
	int i;
	scanf("%d", &i);
	left_move(arr,i);
	printf("%s\n", arr);
	return 0;
}