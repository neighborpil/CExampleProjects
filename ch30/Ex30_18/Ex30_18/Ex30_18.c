#include <stdio.h>

int main(void)
{
#undef DATE
#define DATE "11�� 1��"
	puts(DATE);
#undef DATE
#define DATE "11�� 2��"
	puts(DATE);
#undef DATE

		return 0;

}