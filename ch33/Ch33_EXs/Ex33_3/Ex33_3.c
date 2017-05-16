#include <stdio.h>

int main(void)
{
	int ch;
	FILE *src;
	//fopen_s(&src, "C:\\[Codes]\\Examples\\src.txt", "rt");
	fopen_s(&src, "src.txt", "rt");
	FILE *des;
	//fopen_s(&des, "C:\\[Codes]\\Examples\\dst.txt", "wt");
	fopen_s(&des, "dst.txt", "wt");

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);
	
	fclose(src);
	fclose(des);

	puts("���� ���� �Ϸ�!");

	return 0;
}