#include <stdio.h>
#define ARRY_LEN 3
#define NAME_LEN 30
#define PID_LEN 15

typedef struct __Person 
{
	char Name[NAME_LEN];
	char ID[PID_LEN];
	unsigned int Age;
} Person;

void ShowPersonData(Person *ptr);

int main(void)
{
	int i;
	Person personArr[ARRY_LEN] =
	{
		{ "������", "999999-1222222", 20 },
		{ "����", "999999-1113332", 21 },
		{ "����", "999999-1212121", 22 }
	};

	for (i = 0; i < ARRY_LEN; i++)
		ShowPersonData(&personArr[i]);

	return 0;
}

void ShowPersonData(Person *ptr)
{
	printf("�̸� : %s \n", (*ptr).Name);
	printf("�ֹε�� ��ȣ : %s \n", (*ptr).ID);
	printf("���� : % u \n", ptr->Age);
}
