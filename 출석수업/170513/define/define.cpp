#include <stdio.h>

#define MyName "홍길동"
#define Hap1(x, y) x+y
#define CONDTION 1

int main()
{
	printf("%s \n", MyName);
	int h1, h2, g1, g2;
	h1 = 10 * Hap1(3, 4);
	printf("%d \n", h1); //결과 : 10 * 3 + 4

	//참거짓은 1, 0으로 판단
#if CONDTION
	printf(" A 프로그램 컴파일 \n");
#else
	puts("B 프로그램 컴파일 \n");
#endif

	printf("%.1f \n", 10.1f); //소수 첫재짜리까지 출력



	return 0;
}