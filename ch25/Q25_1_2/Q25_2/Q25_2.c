#include <stdio.h>	

int main(void)
{
	int num1, num2, num3;

	printf("���ڸ� 3�� �Է��ϼ��� \n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	SwapNum(&num1, &num2, &num3);

	printf("%d, %d, %d", num1, num2, num3);
	return 0;
}

int SwapNum(int *num1, int *num2, int *num3)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = tmp;
}