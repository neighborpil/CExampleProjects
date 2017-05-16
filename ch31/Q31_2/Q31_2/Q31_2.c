#include <stdio.h>
#pragma region 조건

/*
#급여 정보 저장 프로그램
 - 5명의 이름과 급여 정보를 입력
 - 평균 급여 계산, 출력
 - 평균 이상의 급여 받는 사람 전부 출력
*/

#pragma endregion

#define PERSON_CNT 5
#define NAME_LEN 30

typedef struct __Person
{
	char name[NAME_LEN];
	unsigned int salary;
} Person;

int GetAvgSalary(Person (*ptr)[]);  //Person (*ptr)[]는 Person배열을 가리키는 포인터이다

void GetHighSalaryThanAvg(Person(*ptr)[], unsigned int avgSalary);

int main(void)
{	
	Person persons[PERSON_CNT];
	int avgSalary = 0;
	
	int i;


	for (i = 0; i < PERSON_CNT; i++)
	{
		printf("이름과 급여를 입력하세요 ");
		scanf_s("%s %u", persons[i].name, sizeof(persons[i].name), &persons[i].salary, sizeof(persons[i].salary));
	}

	avgSalary = GetAvgSalary(&persons);

	printf("평균 급여는 %d 원 입니다 \n", avgSalary);

	GetHighSalaryThanAvg(&persons, avgSalary);

	return 0;

}


//평균 급여 계산
int GetAvgSalary(Person(*ptr)[])
{
	unsigned int sum = 0;

	//Person persons[PERSON_CNT] = *ptr;

	for (int i = 0; i < PERSON_CNT; i++)
	{
		sum += (*ptr)[i].salary;
	}

	return sum / PERSON_CNT;
}

//평균보다 많은 급여를 받는 사람 반환
void GetHighSalaryThanAvg(Person(*ptr)[], unsigned int avgSalary)
{
	for (int i = 0; i < PERSON_CNT; i++)
	{
		if ((*ptr)[i].salary > avgSalary) 
		{
			printf("%s씨의 급여는 평균보다 %d원 높습니다 \n", (*ptr)[i].name, (*ptr)[i].salary - avgSalary);
		}
	}
}