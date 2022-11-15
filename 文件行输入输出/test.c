#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//fgets(读)     fputs(写)

//int main()
//{
//	char arr[100] = { 0 };
//	FILE* pf = fopen("text.txt", "r");  
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(arr,100,pf);    //把文件中的内容写入arr数组
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	char arr[100] = { 'i','k','u','n','j','i'};
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputs(arr, pf);//将数组的内容写进文件中
	fclose(pf);
	pf = NULL;
	return 0;
}