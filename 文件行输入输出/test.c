#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//fgets(��)     fputs(д)

//int main()
//{
//	char arr[100] = { 0 };
//	FILE* pf = fopen("text.txt", "r");  
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(arr,100,pf);    //���ļ��е�����д��arr����
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
	fputs(arr, pf);//�����������д���ļ���
	fclose(pf);
	pf = NULL;
	return 0;
}