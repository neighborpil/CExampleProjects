#include <stdio.h>

int main(void)
{
#undef DATE
#define DATE "11월 1일"
	puts(DATE);
#undef DATE
#define DATE "11월 2일"
	puts(DATE);
#undef DATE

		return 0;

}