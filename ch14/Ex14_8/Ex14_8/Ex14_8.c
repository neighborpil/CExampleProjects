#include <stdio.h>

int main(void)
{
	int num1;
	unsigned int num2;
	unsigned int num3;
	unsigned int num4;

	printf("10���� ���� �Է� : ");
	scanf_s("%d", &num1);
	printf("10������ %d \n", num1);

	printf("8���� ���� �Է� : ");
	scanf_s("%o", &num2);
	printf("10������ %u, 8������ %#o \n", num2, num2);

	printf("16������ ���� �Է�(�ҹ���) : ");
	scanf_s("%x", &num3);
	printf("10������ %d, 16������ %#x \n", num3, num3);

	printf("16���� ���� �Է�(�빮��) : ");
	scanf_s("%x", &num4);
	printf("10������ %d, 16������ %#X \n", num4, num4);

	return 0;
}