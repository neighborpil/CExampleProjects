#include <stdio.h>	

void ClearReadBuffer(void);

int main(void)
{
	unsigned char ch;
	while (1)
	{
		printf("���� �Է� : ");
		ch = getchar();	//Ctrl+z �Է� �� EOF ��ȯ //EOF�� -1�̴� �׷��� � �����Ϸ��� ��쿡�� 
		if (ch == EOF)	//char�� unsigned char������ ó���ϴ� ��쵵 �����Ƿ� -1�� ��ȯ���� �����Ƿ� ���ᰡ ���� �ʴ´�
			break;		//���� getchar()�� ��쿡�� ��ȯ���� char�� �ƴ϶� int ���̴�

		void ClearReadBuffer(void);
		
		printf("�Է� ���� : %c \n", ch);
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