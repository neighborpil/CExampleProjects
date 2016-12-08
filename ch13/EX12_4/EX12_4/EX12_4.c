#include <stdio.h>

int main(void)
{
	char ch = '0';

	if (isdigit(ch))
		printf("숫자입니다 \n");
	else
		printf("숫자가 아닙니다 \n");

	ch = 'a';

	if (isalpha(ch))
		printf("알파벳입니다 \n");
	else
		printf("알파벳이 아닙니다 \n");

	ch = 'A';

	if (islower(ch))
		printf("소문자입니다 \n");
	
	if (isupper(ch))
		printf("대문자입니다 \n");

	return 0;
}