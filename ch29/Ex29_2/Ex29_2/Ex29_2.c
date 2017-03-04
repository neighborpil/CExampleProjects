#include <stdio.h>

void ClearReadBuffer(void);

int main(void)
{
	int ch;
	char str[20];

	/* ������ �Է°� ��� */
	if ((ch = getchar()) == EOF) //���� �ϳ��� �о� ���̴µ� ���ͱ��� ���� �о�鿩 ���ۿ� ���� �ִ´�
	{
		printf("���� READ ���� \n");
		return -1;
	}
	else
	{
		if (putchar(ch) == EOF) //���� �ϳ��� ����ϴµ� ���ۿ� ���Ͱ� �����ִ�
			printf("����  WRITE ���� \n");
		putchar('\n');
	}


	//vC++������ ����
	//fflush(stdin); //�ȵ�

	//���� ����
	ClearReadBuffer();

	/* ���ڿ��� �Է°� ��� */
	if (gets(str) == NULL) //���ڿ��� ���� �� ���ͱ��� �дµ� ���ۿ� ���Ͱ� ���� �����Ƿ� �ٷ� ���ᰡ �ȴ�
	{
		printf("���ڿ� READ ���� \n");
		return -1;
	}
	else
	{
		if (puts(str) == EOF) //�� �͵� �ȳ���
			printf("���ڿ� WRITE ���� \n");
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