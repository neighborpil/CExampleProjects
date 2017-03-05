#include <stdio.h>
#include <stdlib.h>	

//#pragma warning(disable : 4996)

typedef char(*STR_ARR)[20];

int main(void)
{
	STR_ARR strAry = (STR_ARR)malloc(sizeof(char) * 20 * 3);

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("문자열 입력 : ");
		scanf_s("%s", strAry[i], 20);
	}

	for (i = 0; i < 3; i++)
		printf("문자열 %d : %s \n", i + 1, strAry[i]);

	free(strAry);
	strAry = NULL;

	return 0;
}