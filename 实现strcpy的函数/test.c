#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* arr1,const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char* p = arr1;
	while (*arr1++ = *arr2++)
	{
		;
	}
	return p;
}
int main()
{
	char arr1[] = "defghi";
	char arr2[] = "abc";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}