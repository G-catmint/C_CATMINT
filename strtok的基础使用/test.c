#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "21385044@qq.com";
	char* p = "3@.";
	char bef[50] = { 0 };
	strcpy(bef, arr);
	//�Ż�

	for (char*ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	//char*ret = strtok(arr, p);//��p�ĵ�һ���ַ��� ��ʼ��Ϊ\0�� ��arr��Ԫ�ص�ַ�ó��� Ҳ���ǰɡ�2���ĵ�ַ�ó���
	//printf("%s\n", ret);      //�����2������\0��
	//ret = strtok(NULL, p);//��p�ĵڶ����ַ��ҳ��� �ظ���һ��
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	return 0;
}