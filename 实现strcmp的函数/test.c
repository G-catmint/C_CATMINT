#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* p, const char* p1)
{
	assert(p);
	assert(p1);
	while (*p!='\0')
	{
		if (*p == *p1)
		{
			p++;
			p1++;
		}
		else if (*p > *p1)
		{
			return 1;
			break;
		}
		else
		{
			return -1;
			break;
		}
	}
	return 0;
}
int main()
{
	char* p = "abgcf";
	char* p1 = "abcefg";
	int ret=my_strcmp(p, p1);
	printf("%d\n", ret);
	return 0;
}