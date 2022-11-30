#include"test.h"

typedef struct Linklist
{
	int elem;
	struct Linklist* next;
}Linklist;

//创建一个无头结点的链表
Linklist* initlinklist()
{
	Linklist* p = NULL;//头指针
	Linklist* tmp = (Linklist*)malloc(sizeof(Linklist)); //为头结点开辟动态内存
	tmp->elem = 1;//数据域给1
	tmp->next = NULL; //指针域先赋NULL
	p = tmp;     //头指针指向链表
	for (int i = 2; i < 7; i++)
	{//定义一个新节点
		Linklist*a= (Linklist*)malloc(sizeof(Linklist));//依次为每个节点开辟空间
		a->elem = i; //新节点的数据域赋值
		a->next = NULL;//新节点的指针域
		tmp->next = a;//把新节点给tmp的指针域
		tmp = tmp->next;//tmp指向新节点的指针域 也就是NULL
	}
	return p;
}

void display(Linklist* p)
{
	while (p)
	{
		printf("%d ", p->elem);
		p = p->next;
	}
}

int main()
{
	Linklist*p=initlinklist();
	display(p);
	return 0;
}