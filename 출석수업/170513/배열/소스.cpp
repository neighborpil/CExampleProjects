#include <stdio.h>
#include <stdlib.h>

void ClearReadBuffer(void);

int main(void)
{
	//int x[5];

	for (int i = 0; i < 5; i++)
	{
		//scanf_s("%d", &x[i], sizeof(x[i]));
		//x[i] = getchar();
		//ClearReadBuffer();
	}

	for (int i = 0; i < 5; i++)

	{
		//printf("%d \t", x[i]);
		//printf("%c \t", x[i]);
	}

	char *str[3];

	for (int i = 0; i < 3; i++)
	{
		*str[i] = char[100];
	}

	for (int i = 0; i < 3; i++)
	{
		printf("문자열 %d : \n", i);
		scanf_s("%s", str[i]);
		/*gets_s(str[i], 100) ; */
		ClearReadBuffer();
	}

	for (int i = 0; i < 3; i++)
	{
		printf("문자열 %d : %s \n", i, str[i]);
	}

	return 0;
}

void ClearReadBuffer(void)
{
	//while (getchar() != '\n');

	int c;

	do {
		c = getchar();
	} while (c != '\n' && c != EOF);

}

