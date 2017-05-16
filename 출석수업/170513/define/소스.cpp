#include <stdio.h>

void ClearReadBuffer(void);

int main(void)
{
	char a;

	a = getchar();

	printf("%c \n", a);

	ClearReadBuffer();

	char asdf[100];

	gets_s(asdf, sizeof(asdf)); //???왜 안되지/

	//fgets(asdf, sizeof(asdf), stdin);

	printf("%s \n", asdf);

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