#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("������򵥵ĵݹ�\n");
//	main();
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned /*�޷�������*/int num;
	scanf("%d", &num);
	print(num);	
	return 0;
}