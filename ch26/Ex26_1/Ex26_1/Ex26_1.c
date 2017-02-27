#include <stdio.h>

void ShowData(const int * p);

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	const int * ptr = &num1;

	//(*ptr)++ //컴파일 에러 발생
	num1++; //컴파일 성공, 변수가 상수가 된 것이 아니다, 포인터를 이용한 값의 변경만 불가능하다
	ShowData(&num1);

	ptr = &num2; //포인터 ptr이 가리키는 변수에 저장도니 값만 변경이 불가능하다, 따라서 포인터 ptr이 가리키는 대상은 변경이 가능하다
	ShowData(ptr);

	return 0;
}

//함수 내에서는 참조만 가능할 뿐 변경은 불가능
void ShowData(const int * p)
{
	/*
	이 안에서는 p가 가리키는 변수의 값을
	바꿀 수 없다
	*/

	printf("%d \n", *p);
}