#include <stdio.h>

int main(void)
{
	char ch = '0';

	if (isdigit(ch))
		printf("�����Դϴ� \n");
	else
		printf("���ڰ� �ƴմϴ� \n");

	ch = 'a';

	if (isalpha(ch))
		printf("���ĺ��Դϴ� \n");
	else
		printf("���ĺ��� �ƴմϴ� \n");

	ch = 'A';

	if (islower(ch))
		printf("�ҹ����Դϴ� \n");
	
	if (isupper(ch))
		printf("�빮���Դϴ� \n");

	return 0;
}