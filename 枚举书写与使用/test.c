#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Color
{
	RED,
	YELLOW=8,
	GREEN,
	BLUE
};
int main()
{
	enum Color c = RED;
	c = 5;    //c语言可以运行 但是改成.cpp的c++文件后就不能运行了
	//原因是c的类型为 enum Color 而‘5’的类型为int所以不可以赋值给c
	//YELLOW = 5;   常量的值不可改变
	printf("%d\n", c);
	printf("%d %d %d %d\n", RED, YELLOW, GREEN, BLUE);
	return 0;
}