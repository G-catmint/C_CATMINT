#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

struct S
{
	char name[20];
	int age;
	double score;
};

//int main()
//{
//	struct S s = { "����",18,55.5 };
//	FILE* pf = fopen("test.txt", "wb");//rb������ֻ��   wb������ֻд
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);//���ṹ��s�Զ�����д��test.txt�ļ���
//	fclose(pf);                         //�ṹ�����ļ��еĶ����������㿴����
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S tmp = { 0 };
	FILE* pf = fopen("test.txt", "rb");
	//�ж�
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&tmp, sizeof(struct S), 1, pf);	
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}