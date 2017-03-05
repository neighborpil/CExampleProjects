#include <stdio.h>

typedef int IARR3[3];
typedef int I2Arr4[][4];

void Incre2Arr(I2Arr4 arr, int height);
void Print2Arr(I2Arr4 arr, int height);

int main(void)
{
	IARR3 arr1 = { 1, 2, 3 };
	I2Arr4 arr2 = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	for (int i = 0; i < 3; i++)
	{
		printf("%4d", arr1[i]);
	}

	printf("\n\n");
	Print2Arr(arr2, 3);
	printf("\n");

	Incre2Arr(arr2, 3);
	Print2Arr(arr2, 3);

	return 0;
}

void Incre2Arr(I2Arr4 arr, int height) 
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j]++;
		}
	}
}

void Print2Arr(I2Arr4 arr, int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}