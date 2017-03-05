#include <stdio.h>

void FuncOne(void)
{
	printf("FuncOne 함수 호출 \n");
}

void FuncTwo(void)
{
	printf("FuncTwo 함수 호출 \n");
}

int main(void)
{
	FuncOne();
	FuncTwo();

	printf("FuncOne의 주소 값 : %#x \n", FuncOne);
	printf("FuncTwo의 주소 값 : %#x \n", FuncTwo);

	return 0;
}