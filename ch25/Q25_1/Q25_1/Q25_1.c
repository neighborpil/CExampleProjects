#include <stdio.h>
#include "Q25_1.h"

int main(void)
{
	int num;

	printf("������ �Է��ϼ��� \n");
	scanf_s("%d", &num);
	printf("�Է��� �� : %d \n", num);

	PowNum(&num);

	printf("2���� �� : %d \n", num);
	return 0;
}

int PowNum(int *num)
{
	//*num = *num * *num;
	*num *= *num;

	return num;
}