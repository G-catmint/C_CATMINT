#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//位段
struct S  //位段的类型名必定都一样 像这个 都是int
{
	int a : 2;   //先申请int大小的空间—4个字节 用来放a b c d
	int b : 5;   //4个字节32个bit位 a放2个bit位 b放5个bit位 c放10个bit位 还剩15个bit位
	int c : 10;  //d占30个bit位 剩下的15个你太位不够 所以浪费掉这15个bit位 在开辟一个int空间
	int d : 30;  //在开辟一个整形空间32个bit位 放d 剩下2个bit位 浪费掉 所以用了两个整形空间 8个字节
};               //注：“：”后面跟的数字不会大于32；
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//8个字节
	return 0;
}