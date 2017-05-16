#include <stdio.h>
#include <string.h>

#define NAME_LEN 30
#define PID_LEN 15

struct __Person
{
	char name[NAME_LEN];
	char ID[PID_LEN];
	unsigned int age;
};

typedef struct __Person Person;

void ShowPersonData(Person *ptr);
void ChgPersonData(Person *ptr1, Person *ptr2);

int main(void)
{
	char name[NAME_LEN];
	char ID[PID_LEN];
	unsigned int age;

	Person p1;
	Person p2;

	printf("이름, 민번, 나이를 입력해 주세요");
	scanf_s("%s %s %u", &p1.name, sizeof(p1.name), &p1.ID, sizeof(p1.ID), &(p1.age), sizeof(p1.age));

	printf("이름, 민번, 나이를 입력해 주세요");
	scanf_s("%s %s %u", &p2.name, sizeof(p2.name), &p2.ID, sizeof(p2.ID), &(p2.age), sizeof(p2.age));



	ShowPersonData(&p1);
	ShowPersonData(&p2);

	ChgPersonData(&p1, &p2);


	ShowPersonData(&p1);
	ShowPersonData(&p2);

	return 0;
}

void ShowPersonData(Person *ptr)
{
	printf("이름 : %s \n", ptr->name);
	printf("민번 : %s \n", ptr->ID);
	printf("나이 : %u \n", ptr->age);
}

void ChgPersonData(Person *ptr1, Person *ptr2)
{
	Person tmp;
	Person *ptrTmp = &tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}