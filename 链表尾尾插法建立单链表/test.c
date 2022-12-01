#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//结构体
typedef struct Linklist
{
	int elem;
	struct Linklist* next;
}Linklist;
//尾结点函数
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
	printf("请输入数据\n");
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
//输出函数
void display(Linklist* ps)
{
	Linklist* L;
	L = ps->next;
	printf("尾插法输出如下\n");
	while (L)
	{
		printf("%d ", L->elem);
		L = L->next;
	}
}
int main()
{
	Linklist* L;
	//建立尾插法单链表函数
	L=tail(&L);
	//输出函数
	display(L);
	return 0;
}