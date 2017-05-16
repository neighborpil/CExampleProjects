#include <stdio.h>
#define NAME_LEN 30
#define PID_LEN 15

struct __Person
{
	char name[NAME_LEN];	//이름
	char ID[PID_LEN];	//주민등록 번호
	unsigned int age;	//나이
};

typedef struct __Person Person;

void ShowPersonData(Person *ptr);

int main(void)
{
	Person jongsoo = { "한종수", "999999-1111111", 20 };
	Person sungjoo = { "한성주", "999999-2111111", 22 };

	ShowPersonData(&jongsoo);
	ShowPersonData(&sungjoo);

	return 0;
}

void ShowPersonData(Person *ptr)
{
	printf("이름 : %s \n", (*ptr).name);
	printf("주민등록 번호 : %s \n", ptr->ID);
	printf("나이 : %u \n", ptr->age);
}