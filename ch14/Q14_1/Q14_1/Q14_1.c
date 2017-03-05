#include <stdio.h>

int main(void)
{
	//Q1
	long long int num1 = 0;

	scanf_s("%ld", &num1);

	printf("|% -20lld| \n", num1);

	//Q1-1
	long long num1_1 = 123;
	printf("¹®Á¦1 : |% -20lld| \n", num1_1);

	//Q2
	long double num2 = 0.0;

	scanf_s(" %lf", &num2);

	printf("|%020.5lf| \n", num2);

	//Q3
	int num3 = 0;

	scanf_s(" %d", &num3);

	printf("|%-#20X|", num3);

	return 0;
}