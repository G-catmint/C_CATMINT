#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct S
{
	int n;
	int arr[];
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	p->n = 100;
	int i;
	for (i = 0; i < 5; i++)
	{
		p->arr[i] = i;
	}
	struct S* pr = (struct S*)realloc(p, 44);
	if (pr != NULL)
	{
		p = pr;
	}
	
	for (i = 5; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}