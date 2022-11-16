#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

// fseek  ——  根据文件指针位置和偏移量来定位文件指针位置
// ftell  ——  返回文件指针相对于起始位置的偏移量

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//fseek(pf, 2, SEEK_CUR);   // SEEK_CUR 指针指向文件当前位置
	//fseek(pf, 2, SEEK_SET);   // SEEK_SET 指针指向文件起始位置
	fseek(pf, -2, SEEK_END);   // SEEK_END 指针指向文件末尾  /* 末尾还会有一个'\0' and 因为是末尾不能加 只能减 */
	char ch = fgetc(pf);
	printf("%c\n",ch);
	fclose(pf);
	pf = NULL;
	return 0;
}