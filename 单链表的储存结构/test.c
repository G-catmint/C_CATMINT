#include"test.h"

typedef struct Linklist
{
	int elem;
	struct Linklist* next;
}Linklist;

//����һ����ͷ��������
Linklist* initlinklist()
{
	Linklist* p = NULL;//ͷָ��
	Linklist* tmp = (Linklist*)malloc(sizeof(Linklist)); //Ϊͷ��㿪�ٶ�̬�ڴ�
	tmp->elem = 1;//�������1
	tmp->next = NULL; //ָ�����ȸ�NULL
	p = tmp;     //ͷָ��ָ������
	for (int i = 2; i < 7; i++)
	{//����һ���½ڵ�
		Linklist*a= (Linklist*)malloc(sizeof(Linklist));//����Ϊÿ���ڵ㿪�ٿռ�
		a->elem = i; //�½ڵ��������ֵ
		a->next = NULL;//�½ڵ��ָ����
		tmp->next = a;//���½ڵ��tmp��ָ����
		tmp = tmp->next;//tmpָ���½ڵ��ָ���� Ҳ����NULL
	}
	return p;
}

void display(Linklist* p)
{
	while (p)
	{
		printf("%d ", p->elem);
		p = p->next;
	}
}

int main()
{
	Linklist*p=initlinklist();
	display(p);
	return 0;
}