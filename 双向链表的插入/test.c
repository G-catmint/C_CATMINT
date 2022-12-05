#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//创建结构体
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
		printf("你想选取的值不在范围之内\n");
	}
	//int e = 0;
	//e= L->a;
	//return e;
	return L;
}

void  ListInsert(DouLNode* p)
{
	int i = 0;//要插入的位置
	DouLNode* H;
	//DouLNode* S;
	DouLNode* New = (DouLNode*)malloc(sizeof(DouLNode));//要插入的值
	H = New;
	if (New = NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("请输入要插入的值：>\n");
	scanf("%d", &H->a);
	printf("请输入要插入的位置(0-8)：>\n");
	scanf("%d", &i);
	//查找第i个元素 并返回其值
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
	printf("输出插入后的数据：>\n");
	while (ps)
	{
		printf("%d ", ps->a);
		ps = ps->next;
	}
}

int main()
{
	//创建双向链表
	//先定义一个结构体
	DouLNode* con;
	con = Make_DouLNode(&con);
	//进行双链表的插入
	ListInsert(con);
	//输出双向链表
	display(con);
	return 0;
}