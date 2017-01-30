#include <stdio.h>

int Power(int a, int x);

int main(void)
{
	//int a = 0;
	int total = 0;
	/*
	total = Power(2, 5);

	printf("%d \n", total);
*/
	for (int i = 1; i <= 9; i++)
	{
		total = 1;
		for (int j = 0; j <= 9; j++)
		{
			total += Power(i, j);
			printf("%d ", total);
		}
		printf("\n");
	}


	return 0;
}

int Power(int a, int x)
{
	int total = 1;
	for (int i = 1; i <= x; i++)
	{
		total *= a;
	}
	return total;
}