#include <stdio.h>

int* MakeIntArray(int len, int init)
{
	int arr[len];	//아직은 상당수의 컴파일러에서 에러 발생

	int i;
	for (i = 0; i < len; i++)
	{
		arr[i] = init;
	}

	return arr;
}

int main(void)
{
	int* arr1 = MakeIntArray(5, 0);
	int* arr2 = MakeINtArray(7, 2);

	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	for (i = 0; i < 7; i++)
		printf("%d ", arr2[i]);

	return 0;
}
