#include <stdio.h>

void swap(int *x, int *y);

int *s; //전역변수는 쓰레기값으로 초기화 된다

int z; // 전역변수는 static과 같다


int main(void)
{
	int a = 3, b = 5;
	printf("호출전 a = %d, b = %d \n", a, b);
	swap(&a, &b); //swap함수에 a,b변수의 주소값을 넣어라

	printf("호출후 a = %d, b = %d \n", a, b);

	int *k = &a; //지역변수의 포인터 변수는 반드시 초기화 한 뒤 사용하여야 한다
	

	int k2;
	//*k = &a; //포인터 변수는 초기화 한 뒤 사용하여야 한다

	*k = b;
	//k2 = ;

	int x;

	printf("%d \n", &s);

	return 0;
}

void swap(int *x, int *y) 
{
	int temp;
	temp = *x; //*x가리키고 있는 주소의 값을 대입하라
	*x = *y;
	*y = temp;
}