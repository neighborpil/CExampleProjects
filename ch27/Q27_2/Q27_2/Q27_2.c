#include <stdio.h>
#include <stdlib.h>

int* GroupNumbers(int* ary, int len, int(*oddEvenSelect)(int), int* pResult);
int OddSelect(int);
int EvenSelect(int n1);
int ASDSort(int n1, int n2);
int DSDSort(int n1, int n2);
void BubbleSort(int ary[], int len, int(*sortFunc)(int, int));

int main(void)
{
	int ary[] = { 3, 2, 1, 4, 6, 8, 7, 5, 3, 4, 5 };
	int result = 0;
	int* numAry = GroupNumbers(ary, sizeof(ary) / sizeof(ary[0]), OddSelect, &result);
	printf("OddLen : %d \n", result);

	for (int i = 0; i < result; i++)
	{
		printf("OddNums[%d] : %d ", i, numAry[i]);
	}

	printf("\n");

	BubbleSort(numAry, result, ASDSort);

	printf("오름차순 정렬 : ");

	for (int i = 0; i < result; i++)
	{
		printf("%d ", numAry[i]);
	}

	free(numAry);

	printf("\n");
	printf("\n");
	
	result = 0;

	numAry = GroupNumbers(ary, sizeof(ary) / sizeof(ary[0]), EvenSelect, &result);
	for (int i = 0; i < result; i++)
	{
		printf("OddNums[%d] : %d ", i, numAry[i]);
	}

	printf("\n");

	BubbleSort(numAry, result, DSDSort);

	printf("내림차순 정렬 : ");

	for (int i = 0; i < result; i++)
	{
		printf("%d ", numAry[i]);
	}

	free(numAry);
	return 0;
}

int* GroupNumbers(int* ary, int len, int(*oddEvenSelect)(int), int* pResult) 
{
	int i, j = 0;
	int* numAry = (int*)malloc(pResult);

	for (i = 0; i < len - 1; i++)
	{
		*pResult += oddEvenSelect(ary[i]);
	}

	for (i = 0; i < len - 1; i++)
	{
		if (oddEvenSelect(ary[i]) == 1)
		{
			numAry[j] = ary[i];
			j++;
		}
	}

	return numAry;
}

int OddSelect(int n1)
{
	if (n1 % 2 == 1)
		return 1;
	else
		return 0;
}

int EvenSelect(int n1)
{
	if (n1 % 2 == 0)
		return 1;
	else
		return 0;
}

void BubbleSort(int ary[], int len, int(*sortFunc)(int, int))
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (sortFunc(ary[j], ary[j + 1])) 
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

int ASDSort(int n1, int n2)
{
	if (n1 > n2)
		return 1;
	else
		return 0;
}

int DSDSort(int n1, int n2)
{
	if (n1 < n2)
		return 1;
	else 
		return 0;
}