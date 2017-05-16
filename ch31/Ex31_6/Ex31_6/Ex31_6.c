#include <stdio.h>
#include <string.h>
#define NAME_LEN 30
#define PID_LEN 15

struct __Person
{
	char Name[NAME_LEN];	//�̸�
	char ID[PID_LEN];	//�ֹε�Ϲ�ȣ
	unsigned int age;	//����
};

typedef struct __Person Person;

void ShowPersonData(Person *ptr);

int main(void)
{
	Person jongsoo;
	Person copyman;
	Person *personPtr;

	strcpy_s(jongsoo.Name, sizeof(jongsoo.Name), "������");
	strcpy_s(jongsoo.ID, sizeof(jongsoo.ID), "900218-1012589");
	jongsoo.age = 20;

	copyman = jongsoo;
	personPtr = &copyman;

	ShowPersonData(personPtr);

	return 0;

}

void ShowPersonData(Person *ptr)
{
	printf("�̸� : %s \n", ptr -> Name);
	printf("�ֹε�� ��ȣ : %s \n", ptr -> ID);
	printf("���� : % u \n", ptr -> age);
}