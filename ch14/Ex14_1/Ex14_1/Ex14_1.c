#include <stdio.h>
/*
#printf 서식문자

서식문자		출력대상(자료형)	출력형태
%d			int				부호 있는 10진수 정수
%u			unsigned int	부호 없는 10진수 정수
%o			unsigned int	부호 없는 8진수 정수
%x, %X		unsigned int	부호 없는 16진수 정수
%f			double			10진수 방식의 부동소수점 실수
%e, %E		double			e 또는 E 방식의 부동소수점 실수
%g, %G		double			값에 따라 %f, %e 사이에서 선택
%c			int				값에 따라 대응하는 문자
%s			char *			문자열
%p			void *			포인터의 주소값
%n			int *			포인터의 주소값
*/

int main(void)
{
	printf("%d, %d \n", 127, -127);
	printf("%u \n", 127U);
	printf("%o \n", 127U);
	printf("%x \n", 127U);
	printf("%X \n", 127U);
	
	return 0;
}