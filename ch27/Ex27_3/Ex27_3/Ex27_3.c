#include <stdio.h>

void AddProc(void);
void MinusProc(void);
void CallFunc(void(*fctPtr)(void));

int main(void)
{
	CallFunc(AddProc);
	CallFunc(MinusProc);

	return 0;
}

void CallFunc(void(*fctPtr)(void))
{
	fctPtr();
}

void AddProc(void)
{
	int n1, n2;
	printf("���� ���� �� ���� ���� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	printf("���� ��� : %d \n\n", n1 + n2);
}

void MinusProc(void)
{
	int n1, n2;
	printf("���� ���� �� ���� ���� �Է� : ");
	scanf_s("%d %d", &n1, &n2);
	printf("���� ��� : %d \n\n", n1 - n2);
}