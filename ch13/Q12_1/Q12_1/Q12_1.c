#include <stdio.h>
typedef enum { false, true } bool; //false = 0, true = 1

bool isalnum(char ch);

int  main(void)
{
	char ch;
	bool chk;

	printf("문자를 입력하세요 : ");
	scanf_s("%c", &ch);

#pragma region 현재 있는 함수를 활용하는 방법

	chk = isalnum(ch);

	if (chk)
		printf("\n문자 또는 숫자입니다\n");
	else
		printf("\n문자 또는 숫자가 아닙니다\n");
#pragma endregion

#pragma region 새로 함수 정의 해서 사용하기

	if (ch >= 'a' && ch <= 'z')
		printf("\n소문자입니다\n");
	else if (ch >= 'A' && ch <= 'Z')
		printf("\n대문자입니다\n");
	else if (ch >= '0' && ch <= '9')
		printf("\n숫자입니다\n");
	else
		printf("\n알파벳 또는 숫자가 아닙니다\n");
#pragma endregion

	//printf("%d %d\n", false, true);

	//printf("\n%c", ch);

	return 0;
}

bool isalnum(char ch)
{
	if (isdigit(ch) || isalpha(ch))
		return true;
	else
		return false;
}