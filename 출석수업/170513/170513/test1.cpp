#include <stdio.h> //도입부

void prt();

void main() //메인, 가장 먼저 호출하는 부분, 모든 프로그램에 존재
{
	prt();

	//선언문, 치환문, 제어문, 함수 호출
}

void prt() //함수부 : 함수 정의
{
	printf("ㅁㄴㅇㄹ \n");

	int $asdf = 1;
	int _fff = 2;
	
	int total = $asdf + _fff;

	printf("%d \n", total);
}