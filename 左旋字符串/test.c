#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void left_move(char*arr,int i)
{
	assert(arr);
	int j = 0;
	int len = strlen(arr);
	for (j = 0; j < i; j++)
	{
		int k = 0;
		char tmp = *arr;//tmp=abcdef   bcdeaf
		for(k=0;k<len-1;k++)
		{       //5   Ñ­»·4´Î
			*(arr + k) = *(arr + k+1);  //1_bbcdef bccdef bcddef bcdeef
		}//2_ccdeaf cdddeaf cdeeaf cdeaaf
		*(arr + k ) = tmp;   //arr+4/5=e=a bcdeaf  cdeabf
	}
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