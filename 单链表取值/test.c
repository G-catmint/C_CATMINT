#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
//创建结构体
typedef struct Linklist
{
	int data;
	struct Linklist* next;
}Linklist;

Linklist* make_slist(Linklist*ps,int n)
{
	Linklist* L=NULL;
	ps = (Linklist*)malloc(sizeof(Linklist));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	L = ps;
	for (int i = 0; i < n; i++)
	{
		Linklist* a = (Linklist*)malloc(sizeof(Linklist));
		if (a == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		a->data = i;
		a->next = NULL;
		L->next = a;
		L = L->next;
	}
	return ps;
}

//单链表取值
int Getdata(Linklist* ps,int n)
{
	Linklist* p = NULL;
	p = ps->next;
	int j = 0;
	printf("请输入你想选择的值：>\n");
	scanf("%d", &j);
	//while (p /*&& j < n*/)
	for(int i=0;i<=j;i++)
	{
		p = p->next;
	/*	j++;*/
	}
	if (!p || j > n)
	{
		printf("你想选取的值不在范围之内\n");
	}
	int e = 0;
	e= p->data;
	return e;
}

int main()
{
	//建立一个单链表
	int n = 10;
	struct Linklist*con;
	con = make_slist(&con,n);
	//进行单链表的取值
	int e=Getdata(con,n);
	printf("你想找的值为：%d\n",e);
	return 0;
}