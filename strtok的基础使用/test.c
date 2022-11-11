#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "21385044@qq.com";
	char* p = "3@.";
	char bef[50] = { 0 };
	strcpy(bef, arr);
	//优化

	for (char*ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	//char*ret = strtok(arr, p);//从p的第一个字符找 初始化为\0后 将arr首元素地址拿出来 也就是吧“2”的地址拿出来
	//printf("%s\n", ret);      //输出“2”到“\0”
	//ret = strtok(NULL, p);//将p的第二个字符找出来 重复上一步
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	return 0;
}