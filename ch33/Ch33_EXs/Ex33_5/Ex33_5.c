#include <stdio.h>
#define BUF_SIZE 30

int main(void)
{
	char str[BUF_SIZE];

	FILE *src;
	fopen_s(&src, "src.txt", "rt");
	FILE *dst;
	fopen_s(&dst, "dst.txt", "wt");

	if (src == NULL || dst == NULL)
	{
		puts("���� ��� ����");
		return -1;
	}

	while (fgets(str, BUF_SIZE, src) != NULL) //fgets(���ڿ�, ���ۻ�����, read���Ͻ�Ʈ��), ����(\n)�� NULL���� �о����
		fputs(str, dst); //fputs(���ڿ�, wrtie���Ͻ�Ʈ��

	if (feof(src) != 0) //0�� �ƴҽ� ���� �� ����
		puts("���� ���� ����");
	else
		puts("���� ���� ����");

	fclose(src);
	fclose(dst);

	return 0;
}
