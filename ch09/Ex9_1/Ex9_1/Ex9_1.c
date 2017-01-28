#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n1;
	double n2;
	int n3;

	printf("정수 입력 : ");
	scanf_s("%d", &n1, sizeof(4));
	printf("\n실수 입력 : ");
	scanf_s("%lf", &n2, sizeof(8));
	printf("\n정수 입력 : ");
	scanf("%d", &n3);

	printf("\n입력된 세개의 데이터 : %d, %f, %d\n", n1, n2, n3);
	return 0;
}