#include <stdio.h>

//���� 1
int main(void)
{
	int personCnt; //�ο���
	int val; //�ο��� �ݾ��� ���� ����
	int sum = 0; //�հ� �ݾ�

	printf("�մԼ��� �Է��� �ּ��� : ");
	scanf_s("%d", &personCnt, sizeof(personCnt)); //�ο� �� �ޱ�

	for (int i = 0; i < personCnt; i++)
	{
		printf("\n%d ��° �մ��� ���İ��� �Է��� �ּ��� : ", i + 1);
		scanf_s("%d", &val, sizeof(val)); //�ο��� �� �ޱ�
		
		sum += (int)val; //�Ѿ׿� ���ϱ�

	}

	printf("\n�մԼ� : %d \n", personCnt); //�մ� �� ���

	if (personCnt >= 4)
	{
		sum *= 0.9; //4�� �̻�� 10% ����
		printf("�Ѿ� : %d \n", sum); //4�� �̻� ��� ���
		return 0;
	}

	printf("�Ѿ� : %d \n", sum); //4�� �̸� ��� ���

	return 0;
}