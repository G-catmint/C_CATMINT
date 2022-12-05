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

DouLNode*Make_DouLNode(DouLNode* H)
{
	DouLNode* L = NULL;
	H = (DouLNode*)malloc(sizeof(DouLNode));
	if (H == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
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
	}
	return L;
}

void display(DouLNode* p)
{
	p = p->next;
	while (p)
	{
		printf("%d ", p->a);
		p = p->next;
	}
}

int main()
{
	//����˫������
	//�ȶ���һ���ṹ��
	DouLNode* con;
	con = Make_DouLNode(&con);
	//��ӡ����˫���б�
	display(con);
	return 0;
}