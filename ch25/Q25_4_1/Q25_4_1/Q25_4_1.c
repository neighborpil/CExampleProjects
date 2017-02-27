#include <stdio.h>
#include <stdlib.h>


int* MakeIntArray(int len, int init)
{
	//int arr[len];	//아직은 상당수의 컴파일러에서 에러 발생
	int* arr = (int*)malloc(sizeof(int)* len);

	if (arr == NULL)
		return;

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
	int* arr2 = MakeIntArray(7, 2);

	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	for (i = 0; i < 7; i++)
		printf("%d ", arr2[i]);

	printf("\n");

	if (arr1 != NULL)
		free(arr1);
	if (arr2 != NULL)
		free(arr2);

	//arr1 = NULL;
	//arr2 = NULL;

	return 0;
}
