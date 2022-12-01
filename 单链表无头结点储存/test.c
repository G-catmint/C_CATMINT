#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

typedef struct Linklist
{
	int elem;
	struct Linklist* next;
}Linklist;
Linklist* initlinklist()
{
	Linklist* p = NULL;
	Linklist* tmp = (Linklist*)malloc(sizeof(Linklist));
	if (tmp == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	p = tmp;
	for (int i = 1; i < 5; i++)
	{
		Linklist* a = (Linklist*)malloc(sizeof(Linklist));
		if (a == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		a->elem = i;
		a->next = NULL;
		tmp->next = a;
		tmp = tmp->next;
	}
	return p;
}
//Êä³öº¯Êý
void display(Linklist* ps)
{
	Linklist* p = initlinklist();
	p = p->next;

	while (ps)
	{
		printf("%d ", p->elem);
		p = p->next;
	}
}
int main()
{
	Linklist con;
	display(&con);
	return 0;
}