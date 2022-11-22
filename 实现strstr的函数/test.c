#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1);
	assert(arr2);
	char* p = arr2;
	while(*arr1)
	{
		if (*arr1 != *arr2)
		{
			arr2 = p;
		}
		if (*arr1++ == *arr2)
		{
			arr2++;
			while (*arr2 == '\0')
			{
				return arr1;
			}
		}
	}
	return 0;
}
int main()
{
	char arr1[20] = "abdsebcdfe";
	char arr2[] = "bc";
	char*ret=my_strstr(arr1, arr2);
	if (ret == 0)
	{
		printf("Ã»ÕÒµ½\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}