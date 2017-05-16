#include <stdio.h>
#define HIT_NUM 5
#define TEST1


int main(void)
{
#if HIT_NUM == 5
	printf("매크로 상수 HIT_NUM은 5입니다 \n");
#else
	printf("매크로 상수 HIT_NUM은 5가 아닙니다 \n");
#endif

#ifdef TEST
	puts("TEST는 존재한다");
#else
	puts("TEST는 없다");
#endif

	return 0;
}