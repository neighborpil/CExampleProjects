#include <stdio.h>
int main(void)
{
	printf("정수 출력 : %f \n", 3);
	printf("실수 출력 : %d \n", 3.14);

	//형변환
	printf("정수 출력 : %f \n", (double)3);
	printf("실수 출력 : %d \n", (int)3.14); //데이터 손실 발생

	//sizeof : 피연산자의 크기를 바이트 단위로 계산하여 반환하는 연산자
	int num = 1234;
	printf("size of num : %d \n\n", sizeof(num));
	
	printf("size of 1234 : %d \n", sizeof(1234));
	printf("size of 1234.0 : %d \n", sizeof(1234.0));
	printf("size of 0.1234 : %d \n\n", sizeof(0.1234));

	printf("size of char : %d \n", sizeof(char));
	printf("size of short : %d \n", sizeof(short));
	printf("size of double : %d \n\n", sizeof(double));
	return 0;
}