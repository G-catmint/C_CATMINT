#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//�ṹ��
typedef struct Linklist
{
	int elem;
	struct Linklist* next;
}Linklist;
//β��㺯��
Linklist* tail(Linklist* L)
{
	Linklist* p;
	int n = 9;
	L = (Linklist*)malloc(sizeof(Linklist));
	if (L == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	L->next = NULL;
	Linklist* r = L;
	printf("����������\n");
	for (int i = 0; i < n; i++)
	{
		p= (Linklist*)malloc(sizeof(Linklist));
		if (p == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		scanf("%d", &p->elem);
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return L;
}
//�������
void display(Linklist* ps)
{
	Linklist* L;
	L = ps->next;
	printf("β�巨�������\n");
	while (L)
	{
		printf("%d ", L->elem);
		L = L->next;
	}
}
int main()
{
	Linklist* L;
	//����β�巨��������
	L=tail(&L);
	//�������
	display(L);
	return 0;
}