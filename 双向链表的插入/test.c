#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//�����ṹ��
typedef struct DouLNode
{
	int a;
	struct DouLNode* prior;
	struct DouLNode* next;
}DouLNode;

DouLNode* Make_DouLNode(DouLNode* H)
{
	DouLNode* L = NULL;
	H = (DouLNode*)malloc(sizeof(DouLNode));
	if (H == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	H->next = NULL;
	L = H;
	for (int i = 0; i < 9; i++)
	{
		DouLNode* ps = (DouLNode*)malloc(sizeof(DouLNode));
		if (ps == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		ps->a = i;
		ps->next = NULL;
		H->next = ps;
		ps->prior = H;
		H = H->next;
		printf("%d", H->a);
	}
	printf("\n");
	return L;
}

DouLNode* seek(DouLNode* p,int i)
{
	DouLNode* L = NULL;
	L = p->next;
	for (int j = 0; j <= i; j++)
	{
		L = L->next;
	}
	if (!p || i > 9)
	{
		printf("����ѡȡ��ֵ���ڷ�Χ֮��\n");
	}
	//int e = 0;
	//e= L->a;
	//return e;
	return L;
}

void  ListInsert(DouLNode* p)
{
	int i = 0;//Ҫ�����λ��
	DouLNode* H;
	//DouLNode* S;
	DouLNode* New = (DouLNode*)malloc(sizeof(DouLNode));//Ҫ�����ֵ
	H = New;
	if (New = NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("������Ҫ�����ֵ��>\n");
	scanf("%d", &H->a);
	printf("������Ҫ�����λ��(0-8)��>\n");
	scanf("%d", &i);
	//���ҵ�i��Ԫ�� ��������ֵ
	DouLNode* S=NULL;
	S= seek(p, i);
	New->prior = S->prior;
	S->prior->next = New;
	New->next = S;
	S->prior = New;
}

void display(DouLNode* ps)
{
	ps = ps->next;
	printf("������������ݣ�>\n");
	while (ps)
	{
		printf("%d ", ps->a);
		ps = ps->next;
	}
}

int main()
{
	//����˫������
	//�ȶ���һ���ṹ��
	DouLNode* con;
	con = Make_DouLNode(&con);
	//����˫����Ĳ���
	ListInsert(con);
	//���˫������
	display(con);
	return 0;
}