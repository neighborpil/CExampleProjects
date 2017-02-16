#include <stdio.h>

int main(void)
{
	int n1 = 10, n2 = 20, n3 = 30;
	int* arr[3] = { &n1, &n2, &n3 };

	int** dPtr = &arr[0];
	printf("%d, %d, %d \n", **dPtr, **(dPtr + 1), **(dPtr + 2)); //모든 포인터는 크기가 4이므로 1을 더하면 증가하는 값의 크기는 4이다
																 //즉 arr배열의 다음 포인터이자 배열의 다음값이다

	return 0;
}