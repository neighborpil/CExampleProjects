#include <stdio.h>
#include <string.h>
#define NAME_LEN 30 
#define PID_LEN 15

struct __Person
{
	char name[NAME_LEN];	//�̸�
	char ID[PID_LEN];	//�ֹε�� ��ȣ
	unsigned int age;	//����
};

typedef struct __Person Person;

void ShowPeersonData(Person prsn);

int main(void)
{
	Person jongsoo;
	Person copyman;

	strcpy_s(jongsoo.name, sizeof(jongsoo.name), "������"); //destination�� �����ŭ ���� ũ�� ����
	strcpy_s(jongsoo.ID, sizeof(jongsoo.ID), "900218-1111111");
	jongsoo.age = 20;

	copyman = jongsoo;
	ShowPeersonData(copyman);

	strcpy_s(jongsoo.name, sizeof(jongsoo.name), "������1"); //destination�� �����ŭ ���� ũ�� ����
	
	ShowPeersonData(copyman); //����� "������"�� ���´�. �� string�� �������簡 �ƴ϶� �����簡 �ȴٴ� ��

	return 0;
}

void ShowPeersonData(Person prsn)
{
	printf("�̸� : %s \n", prsn.name);
	printf("�ֹε�� ��ȣ : %s \n", prsn.ID);
	printf("���� : %u \n", prsn.age);
}