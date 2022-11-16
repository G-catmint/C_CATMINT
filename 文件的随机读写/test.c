#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

// fseek  ����  �����ļ�ָ��λ�ú�ƫ��������λ�ļ�ָ��λ��
// ftell  ����  �����ļ�ָ���������ʼλ�õ�ƫ����

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//fseek(pf, 2, SEEK_CUR);   // SEEK_CUR ָ��ָ���ļ���ǰλ��
	//fseek(pf, 2, SEEK_SET);   // SEEK_SET ָ��ָ���ļ���ʼλ��
	fseek(pf, -2, SEEK_END);   // SEEK_END ָ��ָ���ļ�ĩβ  /* ĩβ������һ��'\0' and ��Ϊ��ĩβ���ܼ� ֻ�ܼ� */
	char ch = fgetc(pf);
	printf("%c\n",ch);
	fclose(pf);
	pf = NULL;
	return 0;
}