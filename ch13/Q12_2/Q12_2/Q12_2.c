#include <stdio.h>
typedef enum{false, true} bool;

int ConvToInt(int ch);

int main(void)
{
	char ch;

	printf("���ڸ� ���ڸ� �Է��ϼ��� : ");

	while (1)
	{
		scanf_s("%c", &ch);

		if (ch >= '0' && ch <= '9')
			break;
		else
			printf("\n���ڸ� ���ڸ� �Է��ϼ��� : ");
			
	}
	




	return 0;
}

int ConvToInt(int ch)
{

}