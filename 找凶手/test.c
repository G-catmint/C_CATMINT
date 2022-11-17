#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k = 0;
	for (k = 'a'; k <= 'd'; k++)
	{
		int p = (k != 'a') + (k == 'c') + (k == 'd') + (k != 'd');
		if (p == 3)
		{
			printf("Ð×ÊÖÊÇ£º%c\n", k);
		}
	}
	return 0;
}
