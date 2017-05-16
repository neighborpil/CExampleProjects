#include <stdio.h>
#define STNUM(Y, S, P) Y ## S ## P

int main(void)
{
	printf("ÇÐ¹ø : %d \n", STNUM(10, 60, 75));

	return 0;
}