#include <stdio.h>

int main(void)
{
	char a = 'A'; //문자 A
	char b = 'P'; //문자 P

	printf("A의 아스키 코드 값 : %d \n", a); //문자 A의 아스키 코드값 출력
	printf("P의 아스키 코드 값 : %d \n\n", b); //문자 P의 아스키 코드값 출력

	printf("A~P까지 출력 \n");
	for (int i = (int)a; i <= (int)b; i++) //A부터 P의 아스키 코드값까지 for문 반복
	{
		printf("%c ", i); //문자 출력
	}
	printf("\n");

	return 0;
}