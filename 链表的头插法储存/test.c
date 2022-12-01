#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//定义一个结构体
typedef struct Linklist
{
	int elem;
	struct Linklist* next;
}Linklist;
//链表前插法 ：
Linklist*Initlinklist(Linklist*L)
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
	//int x;
	//scanf("%d", &x);
	for(int i=n;i>0;i--)
	//while(x!=9999)
	{
		p = (Linklist*)malloc(sizeof(Linklist));
		if (p == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		scanf("%d", &p->elem);
		//p->elem = x;
		p->next = L->next;
		L->next = p;
	/*	scanf("%d", &x);*/
	}
	return L;
}

void tistplay(Linklist*ps)
{
	Linklist* L;
	L = ps->next;
	printf("链表元素如下：\n");
	while (ps!=NULL)
	{
		printf("%d ", L->elem);
		L=L->next;
	}
}

int main()
{
	Linklist* con;
	con= Initlinklist(&con);
	tistplay(con); //问：这里为什么不用去地址
	return 0;
}