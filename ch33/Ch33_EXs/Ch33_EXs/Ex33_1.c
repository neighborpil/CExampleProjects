#include <stdio.h>

int main(void)
{
	FILE *fp;
	fopen_s(&fp, "data.txt", "wt"); //fopen_s�� �����͸� ó���� �������־�� �Ѵ�, ������ ����� fopen_s�Լ��� ���ٿ� ��� X

	if (fp == NULL)
	{
		puts("���� ���� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);

	return 0;
}