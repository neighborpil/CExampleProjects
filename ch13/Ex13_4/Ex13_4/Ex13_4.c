#include <stdio.h>

int Increment(register int n)  //매개변수가 register 변수로 선언되었다, 함수의 크기가 작아서 메모리 공간에 존재하는 시간이
{							   //길지 않으므로 레지스터 변수로 선언할만 하다
	return n + 1;
}

int main(void)
{
	register int num = 10; //지역변수를 레지스터 변수로 선언하였다

	num = Increment(num);
	printf("%d \n", num);

	num = Increment(num);
	printf("%d \n", num);

	num = Increment(num);
	printf("%d \n", num);

	return 0;
}