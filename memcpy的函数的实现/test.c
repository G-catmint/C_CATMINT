#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcpy�ı׶�             /*arr1���ڴ��� 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00*/
//int main()               /*strcpy����"\0"�ͣ��£���ֹͣ��*/
//{
//	int arr1[] = { {1},{2},{3},{4},{5} };
//	int arr2[] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%d\n", arr1);
//	return 0;
//}

struct s
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* src, size_t i)
{
	void* ret = dest;
	assert(dest);
	assert(src);
 	while (i--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	struct s arr3[] = { {"����",23},{"����",24} };
	struct s arr4[3]={0};
	my_memcpy(arr4, arr3, sizeof(arr3));
	printf("%s\n",arr4);
	return 0;
}