#include <stdio.h>
#pragma region ����

/*
#�޿� ���� ���� ���α׷�
 - 5���� �̸��� �޿� ������ �Է�
 - ��� �޿� ���, ���
 - ��� �̻��� �޿� �޴� ��� ���� ���
*/

#pragma endregion

#define PERSON_CNT 5
#define NAME_LEN 30

typedef struct __Person
{
	char name[NAME_LEN];
	unsigned int salary;
} Person;

int GetAvgSalary(Person (*ptr)[]);  //Person (*ptr)[]�� Person�迭�� ����Ű�� �������̴�

void GetHighSalaryThanAvg(Person(*ptr)[], unsigned int avgSalary);

int main(void)
{	
	Person persons[PERSON_CNT];
	int avgSalary = 0;
	
	int i;


	for (i = 0; i < PERSON_CNT; i++)
	{
		printf("�̸��� �޿��� �Է��ϼ��� ");
		scanf_s("%s %u", persons[i].name, sizeof(persons[i].name), &persons[i].salary, sizeof(persons[i].salary));
	}

	avgSalary = GetAvgSalary(&persons);

	printf("��� �޿��� %d �� �Դϴ� \n", avgSalary);

	GetHighSalaryThanAvg(&persons, avgSalary);

	return 0;

}


//��� �޿� ���
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

//��պ��� ���� �޿��� �޴� ��� ��ȯ
void GetHighSalaryThanAvg(Person(*ptr)[], unsigned int avgSalary)
{
	for (int i = 0; i < PERSON_CNT; i++)
	{
		if ((*ptr)[i].salary > avgSalary) 
		{
			printf("%s���� �޿��� ��պ��� %d�� �����ϴ� \n", (*ptr)[i].name, (*ptr)[i].salary - avgSalary);
		}
	}
}