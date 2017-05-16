#include <stdio.h>
#include <string.h>
#define NAME_LEN 30 
#define PID_LEN 15

struct __Person
{
	char name[NAME_LEN];	//이름
	char ID[PID_LEN];	//주민등록 번호
	unsigned int age;	//나이
};

typedef struct __Person Person;

void ShowPeersonData(Person prsn);

int main(void)
{
	Person jongsoo;
	Person copyman;

	strcpy_s(jongsoo.name, sizeof(jongsoo.name), "한종수"); //destination의 사이즈만큼 버퍼 크기 지정
	strcpy_s(jongsoo.ID, sizeof(jongsoo.ID), "900218-1111111");
	jongsoo.age = 20;

	copyman = jongsoo;
	ShowPeersonData(copyman);

	strcpy_s(jongsoo.name, sizeof(jongsoo.name), "한종수1"); //destination의 사이즈만큼 버퍼 크기 지정
	
	ShowPeersonData(copyman); //출력은 "한종수"로 나온다. 즉 string도 참조복사가 아니라 값복사가 된다는 말

	return 0;
}

void ShowPeersonData(Person prsn)
{
	printf("이름 : %s \n", prsn.name);
	printf("주민등록 번호 : %s \n", prsn.ID);
	printf("나이 : %u \n", prsn.age);
}