#include <stdio.h>
typedef enum { false, true } bool; //false = 0, true = 1

bool isalnum(char ch);

int  main(void)
{
	char ch;
	bool chk;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &ch);

#pragma region ���� �ִ� �Լ��� Ȱ���ϴ� ���

	chk = isalnum(ch);

	if (chk)
		printf("\n���� �Ǵ� �����Դϴ�\n");
	else
		printf("\n���� �Ǵ� ���ڰ� �ƴմϴ�\n");
#pragma endregion

#pragma region ���� �Լ� ���� �ؼ� ����ϱ�

	if (ch >= 'a' && ch <= 'z')
		printf("\n�ҹ����Դϴ�\n");
	else if (ch >= 'A' && ch <= 'Z')
		printf("\n�빮���Դϴ�\n");
	else if (ch >= '0' && ch <= '9')
		printf("\n�����Դϴ�\n");
	else
		printf("\n���ĺ� �Ǵ� ���ڰ� �ƴմϴ�\n");
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