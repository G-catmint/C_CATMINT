#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char* arr[5];
//	char*(* pa)[5] = &arr;    //����"*"��� ȷ����һ��ָ��  ����"[10]"��� ȷ����һ����������ָ��
//	printf("%s", pa);        //����ǰ������char* ��ʾ pa ָ������� Ԫ������ ���Ա�����char*(*pa)
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	/*������д��:
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *p + i);
	}*/

	int(*p)[10] = &arr;    /*&arr ���� �����ַ*/
	for (int i = 0; i < 10; i++)
	{
	//	printf("%d ", *(* p + i));
		printf("%d ", (*p)[i]);
	}
	return 0;
}