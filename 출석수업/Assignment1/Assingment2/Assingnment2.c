#include <stdio.h>

//����2
int main(void)
{
	int sum = 0; //����

	for (int i = 1; i <= 1000; i++) //1~1000���� ����
	{
		if (i % 7 == 0) //i�� 7�� ������ �������� 0�̶��
		{
			printf("%d \t", i); //i ���
			sum += i; // �հ迡 ���ϱ�
		}
	}

	printf("\n\nsum : %d \n", sum); //�հ� ���

	return 0;
}