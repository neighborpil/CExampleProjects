#include <stdio.h>

void FuncOne(void)
{
	printf("FuncOne �Լ� ȣ�� \n");
}

void FuncTwo(void)
{
	printf("FuncTwo �Լ� ȣ�� \n");
}

int main(void)
{
	FuncOne();
	FuncTwo();

	printf("FuncOne�� �ּ� �� : %#x \n", FuncOne);
	printf("FuncTwo�� �ּ� �� : %#x \n", FuncTwo);

	return 0;
}