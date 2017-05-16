#include <stdio.h>
#define NAME_LEN 30
#define PID_LEN 15

struct __Person
{
	char name[NAME_LEN];	//�̸�
	char ID[PID_LEN];	//�ֹε�� ��ȣ
	unsigned int age;	//����
};

typedef struct __Person Person;

void ShowPersonData(Person *ptr);

int main(void)
{
	Person jongsoo = { "������", "999999-1111111", 20 };
	Person sungjoo = { "�Ѽ���", "999999-2111111", 22 };

	ShowPersonData(&jongsoo);
	ShowPersonData(&sungjoo);

	return 0;
}

void ShowPersonData(Person *ptr)
{
	printf("�̸� : %s \n", (*ptr).name);
	printf("�ֹε�� ��ȣ : %s \n", ptr->ID);
	printf("���� : %u \n", ptr->age);
}