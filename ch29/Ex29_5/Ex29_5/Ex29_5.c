#include <stdio.h>	

void ClearReadBuffer(void);

int main(void)
{
	unsigned char ch;
	while (1)
	{
		printf("문자 입력 : ");
		ch = getchar();	//Ctrl+z 입력 식 EOF 반환 //EOF는 -1이다 그런데 어떤 컴파일러의 경우에는 
		if (ch == EOF)	//char를 unsigned char형으로 처리하는 경우도 있으므로 -1을 반환하지 않으므로 종료가 되지 않는다
			break;		//따라서 getchar()의 경우에는 반환형이 char이 아니라 int 형이다

		void ClearReadBuffer(void);
		
		printf("입력 문자 : %c \n", ch);
	}

	printf("End \n");
	
	return 0;
}

void ClearReadBuffer(void)
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}