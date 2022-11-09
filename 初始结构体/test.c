#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct Stu  /*新定义的类*/
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}Stu;      /*注意一定要加分号‘; ’*/
void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age :%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex :%s\n", tmp.sex);
}
void print2(Stu* tmp)
//相比较于第一种 这一种方法更节省空间
{
	printf("name:%s\n", tmp->name);	
	printf("age :%d\n", tmp->age);
	printf("tele:%s\n", tmp->tele);
	printf("sex :%s\n", tmp->sex);
}
int main()
{
	Stu s = { "李四",40,"18843501385","男" };
	//打印结构体数据
	print1(s);
	print2(&s);
}