#include <stdio.h>

int main(void)
{
	int num1 = 3;
	char num2 = 'A';
	double num3 = 0.3423;

	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int *ptr3 = &num3;

	printf("num1�� ���� ��ġ : %#x \n", &num1);
	printf("num2�� ���� ��ġ : %#x \n", &num2);
	printf("num3�� ���� ��ġ : %#x \n", &num3);

	printf("num1�� ������ġ : %#x \n", ptr1);
	printf("num2�� ������ġ : %#x \n", ptr2);
	printf("num3�� ������ġ : %#x \n", ptr3);

	printf("num1�� �ּ� ���� ũ�� : %d \n", sizeof(&num1));
	printf("num2�� �ּ� ���� ũ�� : %d \n", sizeof(&num2));
	printf("num3�� �ּ� ���� ũ�� : %d \n", sizeof(&num3));

	return 0;
}