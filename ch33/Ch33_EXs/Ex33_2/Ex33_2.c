#include <stdio.h>

int main(void)
{
	int ch, i;
	FILE *fp;
	fopen_s(&fp, "C:\\[Codes]\\Examples\\data.txt", "rt");

	if (fp == NULL)
	{
		puts("���� ���� ����!");
		return -1;
	}

	for (i = 0; i < sizeof(*fp); i++)
	{
		ch = fgetc(fp);
		putchar(ch);
	}
	puts("");

	fclose(fp);

	return 0;
}