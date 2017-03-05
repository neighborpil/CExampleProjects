#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "한글도 얼마든지 전달인자가 될 수 있습니다";
	char * strPtr;

	strPtr = strstr(str, "가 될 수 있습"); //가 될 수 있습을 포함한다
	printf("시작 위치 이후 문자열 : %s \n", strPtr); //결과는 "가 될 수 있습니다"

	return 0;
}