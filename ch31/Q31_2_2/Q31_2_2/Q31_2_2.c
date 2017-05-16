#include <stdio.h>
#define NAME_LEN 30
#define PID_LEN 15
#define EMP_NUM 5

typedef struct __Employee
{
	char name[NAME_LEN];	//이름
	char ID[PID_LEN];	//직원 고유번호
	unsigned int salary;	//급여
} Employee;

void ShowEmployeeData(Employee *ptr);

int main(void)
{
	Employee empAry[EMP_NUM];
	double avgSry = 0;	// 평균 급여
	int sumSry = 0;
	int i;

	//5명의 정보 입력
	for (i = 0; i < EMP_NUM; i++)
	{
		printf("사번 이름 급여 순 입력 : ");
		scanf_s("%s %s %u", empAry[i].name, sizeof(NAME_LEN), empAry[i].ID, sizeof(PID_LEN), &empAry[i].salary, sizeof(unsigned int));
		sumSry += empAry[i].salary;
	}

	//평균 급여 계산 및 출력
	avgSry = (double)sumSry / EMP_NUM;
	printf("평균급여 : %g \n", avgSry);

	//평균 이상의 급여자 이름 및 ID 출력
	puts("평균 이상 급여자 정보..................");
	for (i = 0; i < EMP_NUM; i++)
		if ((double)empAry[i].salary > avgSry)
			ShowEmployeeData(&empAry[i]);

	return 0;
}

void ShowEmployeeData(Employee *ptr)
{
	printf("이름 : %s \n", ptr->name);
	printf("사번 : %s \n", ptr->ID);
	printf("급여 : %u \n\n", ptr->salary);
}