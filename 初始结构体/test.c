#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct Stu  /*�¶������*/
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}Stu;      /*ע��һ��Ҫ�ӷֺš�; ��*/
void print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age :%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex :%s\n", tmp.sex);
}
void print2(Stu* tmp)
//��Ƚ��ڵ�һ�� ��һ�ַ�������ʡ�ռ�
{
	printf("name:%s\n", tmp->name);	
	printf("age :%d\n", tmp->age);
	printf("tele:%s\n", tmp->tele);
	printf("sex :%s\n", tmp->sex);
}
int main()
{
	Stu s = { "����",40,"18843501385","��" };
	//��ӡ�ṹ������
	print1(s);
	print2(&s);
}