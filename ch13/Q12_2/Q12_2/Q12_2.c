#include <stdio.h>
typedef enum{false, true} bool;

int ConvToInt(int ch);

int main(void)
{
	char ch;

	printf("한자리 숫자를 입력하세오 : ");

	while (1)
	{
		scanf_s("%c", &ch);

		if (ch >= '0' && ch <= '9')
			break;
		else
			printf("\n한자리 숫자를 입력하세요 : ");
			
	}
	




	return 0;
}

int ConvToInt(int ch)
{

}