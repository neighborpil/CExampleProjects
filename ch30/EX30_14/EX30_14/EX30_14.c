#include <stdio.h>
#define STNUM(Y, S, P) Y ## S ## P

int main(void)
{
	printf("�й� : %d \n", STNUM(10, 60, 75));

	return 0;
}