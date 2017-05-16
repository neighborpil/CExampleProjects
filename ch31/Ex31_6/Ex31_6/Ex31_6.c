#include <stdio.h>
#include <string.h>
#define NAME_LEN 30
#define PID_LEN 15

struct __Person
{
	char Name[NAME_LEN];	//이름
	char ID[PID_LEN];	//주민등록번호
	unsigned int age;	//나이
};

typedef struct __Person Person;

void ShowPersonData(Person *ptr);

int main(void)
{
	Person jongsoo;
	Person copyman;
	Person *personPtr;

	strcpy_s(jongsoo.Name, sizeof(jongsoo.Name), "한종수");
	strcpy_s(jongsoo.ID, sizeof(jongsoo.ID), "900218-1012589");
	jongsoo.age = 20;

	copyman = jongsoo;
	personPtr = &copyman;

	ShowPersonData(personPtr);

	return 0;

}

void ShowPersonData(Person *ptr)
{
	printf("이름 : %s \n", ptr -> Name);
	printf("주민등록 번호 : %s \n", ptr -> ID);
	printf("나이 : % u \n", ptr -> age);
}