#include <stdio.h>

void ShowData(const int * p);

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	int * const ptr1 = &num1; // 포인터 변수가 가리키는 대상은 고정
	int * const ptr2; //선언과 동시에 쓸모 없어짐, 포인터 변수에 저장된 값 변경이 불가능하므로 쓸모 X

	//ptr2 = &num2;
	//ptr1 = &num2;

	(*ptr1)++; //포인터 변수가 가리키는 대상은 고정, 하지만 안의 값은 변경이 가능하다
	ShowData(ptr1);
	
	return 0;
}

void ShowData(const int * p)
{
	/*
	이 안에서는 p가 가리키는 
	변수의 값을 바꿀 수 없다
	*/

	printf("%d \n", *p);
}