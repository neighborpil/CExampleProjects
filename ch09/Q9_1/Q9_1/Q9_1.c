#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double a;

	printf("실수 입력 : ");
	scanf("%lf", &a);

	printf("실수의 제곱 : %f", (a * a));
	
	return 0;
}
