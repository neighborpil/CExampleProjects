#include <stdio.h>

typedef int (*I2Arr3)[3];

int SumArr(int arr[][3]);
I2Arr3 CmpArrSum(int ar1[][3], int arr2[][3]);

int main(void)
{
	int arr1[3][3] = { {3,2,1}, {6,7,2}, {5,1,9} };
	int arr2[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

	I2Arr3 aptr = CmpArrSum(arr1, arr2);

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", aptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

I2Arr3 CmpArrSum(int ar1[][3], int ar2[][3])
{
	if (SumArr(ar1) > SumArr(ar2))
		return ar1;
	else
		return ar2;
}

int SumArr(int arr[][3])
{
	int total = 0;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			total += arr[i][j];
	}
	return total;
}


//typedef int (*intArr3)[3];
//
//intArr3 chooseBigger(intArr3 arr1, int height1, intArr3 arr2, int height2)
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	for (int i = 0; i < height1; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum1 += arr1[i][j];
//		}
//	}
//
//	for (int i = 0; i < height2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum2 += arr2[i][j];
//		}
//	}
//
//
//	if (sum1 > sum2)
//	{
//
//	}
//	else
//	{
//		return arr1;
//	}
//
//}
//
//int main(void)
//{
//	intArr3 arr1[][3] = {
//		{1, 2, 3}, {4, 5, 6}, {7, 8, 9}
//	};
//
//	intArr3 arr2[][3] = {
//		{ 3, 4, 5 },{ 4, 5, 6 },{ 7, 8, 9 }
//	};
//
//	intArr3 arr = chooseBigger(&arr1, 3, &arr2, 3);
//
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//	}
//
//	if (arr == arr1) 
//	{
//		printf("arr1 is bigger than arr2, sum : %d", sum);
//	}
//	else if (arr == arr2)
//	{
//		printf("arr2 is bigger than arr1, sum : %d", sum);
//	}
//
//	return 0;
//}
//
