#include <stdio.h>
#define NAME_LEN 30
#define PID_LEN 15
#define EMP_NUM 5

typedef struct __Employee
{
	char name[NAME_LEN];	//�̸�
	char ID[PID_LEN];	//���� ������ȣ
	unsigned int salary;	//�޿�
} Employee;

void ShowEmployeeData(Employee *ptr);

int main(void)
{
	Employee empAry[EMP_NUM];
	double avgSry = 0;	// ��� �޿�
	int sumSry = 0;
	int i;

	//5���� ���� �Է�
	for (i = 0; i < EMP_NUM; i++)
	{
		printf("��� �̸� �޿� �� �Է� : ");
		scanf_s("%s %s %u", empAry[i].name, sizeof(NAME_LEN), empAry[i].ID, sizeof(PID_LEN), &empAry[i].salary, sizeof(unsigned int));
		sumSry += empAry[i].salary;
	}

	//��� �޿� ��� �� ���
	avgSry = (double)sumSry / EMP_NUM;
	printf("��ձ޿� : %g \n", avgSry);

	//��� �̻��� �޿��� �̸� �� ID ���
	puts("��� �̻� �޿��� ����..................");
	for (i = 0; i < EMP_NUM; i++)
		if ((double)empAry[i].salary > avgSry)
			ShowEmployeeData(&empAry[i]);

	return 0;
}

void ShowEmployeeData(Employee *ptr)
{
	printf("�̸� : %s \n", ptr->name);
	printf("��� : %s \n", ptr->ID);
	printf("�޿� : %u \n\n", ptr->salary);
}