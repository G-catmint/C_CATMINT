#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//  fprintf(д���ļ�)   fscanf(���)
struct S
{
	int n;
	float score;
	char arr[10];
};
//int main()
//{
//	struct S s = { 10,3.14f,"china" };
//	FILE* pf = fopen( "text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//�ѽṹ��������ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = { 0 };
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));//���ļ����ֵ�ŵ��ṹ���Ӧ��λ��
	printf("%d %f %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}