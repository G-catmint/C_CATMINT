#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S*pa)
{
	pa->a=3; 
	pa->c='w';
	pa->d=3.14;
}
//´«Ö·
void print(struct S* pa)
{
	printf("%d %c %lf\n", pa->a, pa->c, pa->d);
}
//´«Öµ
void print1(struct S s)
{
	printf("%d %c %lf\n",s.a,s.c, s.d);	
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	print(&s);
	print1(s);
	return 0;
}