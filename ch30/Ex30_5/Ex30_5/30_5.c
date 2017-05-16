#include <stdio.h>

#define ADD 1
#define MIN 0

int main(void)
{
	int num1, num2;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d, %d", &num1, &num2); //입력받는 두 수 사이에 다른 문자를 넣어주면 입력할 때도 그것을 넣어줘야 한다

#if ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}