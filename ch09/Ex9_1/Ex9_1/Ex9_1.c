#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n1;
	double n2;
	int n3;

	printf("���� �Է� : ");
	scanf_s("%d", &n1, sizeof(4));
	printf("\n�Ǽ� �Է� : ");
	scanf_s("%lf", &n2, sizeof(8));
	printf("\n���� �Է� : ");
	scanf("%d", &n3);

	printf("\n�Էµ� ������ ������ : %d, %f, %d\n", n1, n2, n3);
	return 0;
}