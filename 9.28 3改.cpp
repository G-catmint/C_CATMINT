#include<stdio.h>
//����ָ�룬ȡa,b�ĵ�ַ���н��� 
void Swap(int*pa,int*pb)
{
	int i;
	i=*pa;
	*pa=*pb;
	*pb=i;
}
int main()
{
	int a=2;
	int b=4;
	printf("a=%d b=%d\n",a,b);
	Swap(&a,&b);
	printf("a=%d b=%d",	a,b);
	return 0;
}
