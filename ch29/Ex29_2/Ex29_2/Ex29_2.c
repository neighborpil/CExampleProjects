#include <stdio.h>

void ClearReadBuffer(void);

int main(void)
{
	int ch;
	char str[20];

	/* 문자의 입력과 출력 */
	if ((ch = getchar()) == EOF) //문자 하나를 읽어 들이는데 엔터까지 같이 읽어들여 버퍼에 남아 있는다
	{
		printf("문자 READ 실패 \n");
		return -1;
	}
	else
	{
		if (putchar(ch) == EOF) //문자 하나를 출력하는데 버퍼에 엔터가 남아있다
			printf("문자  WRITE 실패 \n");
		putchar('\n');
	}


	//vC++에서만 동작
	//fflush(stdin); //안됨

	//버퍼 비우기
	ClearReadBuffer();

	/* 문자열의 입력과 출력 */
	if (gets(str) == NULL) //문자열을 읽을 때 엔터까지 읽는데 버퍼에 엔터가 남아 있으므로 바로 종료가 된다
	{
		printf("문자열 READ 실패 \n");
		return -1;
	}
	else
	{
		if (puts(str) == EOF) //암 것도 안나옴
			printf("문자열 WRITE 실패 \n");
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