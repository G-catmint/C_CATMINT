#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

struct S
{
	char name[20];
	int age;
	double score;
};

//int main()
//{
//	struct S s = { "张三",18,55.5 };
//	FILE* pf = fopen("test.txt", "wb");//rb二进制只读   wb二进制只写
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);//将结构体s以二进制写入test.txt文件中
//	fclose(pf);                         //结构体在文件中的二进制形势你看不懂
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S tmp = { 0 };
	FILE* pf = fopen("test.txt", "rb");
	//判断
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&tmp, sizeof(struct S), 1, pf);	
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}