#include <stdio.h>

int main(void)
{
	int num1;
	int num2;

	printf("�� ���� �Է��ϼ��� \n");
	scanf_s("%d %d", &num1, &num2);

	printf("\n");

	for(int i=1; i<=100;i++)
	{
		if(i % num1 == 0  && i % num2 != 0)
			printf("%d ", i);
	}
	printf("\n");
	

	return 0;
}