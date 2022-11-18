#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//写一个函数 可以逆序字符串内容
void reverse(char* str)
{
	assert(str);
	int sz = strlen(str);
	char* right =str+sz-1;
	char* left = str;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	//printf("%s\n", arr);
}

int main()
{
	char arr[256];

	//scanf("%s", &arr);
	gets(arr);
	reverse(arr); 
	printf("%s\n", arr);
	return 0;
}