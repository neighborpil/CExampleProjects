#include <stdio.h>
#define BUFF_SIZE 30

int main(void)
{
	int ch;
	char str[BUFF_SIZE];
	int num;

	//������ �Է°� ���
	ch = fgetc(stdin);
	fputc(ch, stdout);
	ch = getc(stdin); //����\n�� �Է¹ޱ� ���� �ѹ��� ����
	putc(ch, stdout);

	//���ڿ� �����
	fgets(str, BUFF_SIZE, stdin); //����\n���� ����
	fputs(str, stdout);

	//���� ���ڿ� ������ �����
	fscanf_s(stdin, "%d %c", &num, &ch);
	fprintf(stdout, "���� : %d, ���� : %c \n", num, ch);

	return 0;
}