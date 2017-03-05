#include <stdio.h>
#include "Q25_1.h"

int main(void)
{
	int num;

	printf("정수를 입력하세요 \n");
	scanf_s("%d", &num);
	printf("입력한 값 : %d \n", num);

	PowNum(&num);

	printf("2승한 값 : %d \n", num);
	return 0;
}

int PowNum(int *num)
{
	//*num = *num * *num;
	*num *= *num;

	return num;
}