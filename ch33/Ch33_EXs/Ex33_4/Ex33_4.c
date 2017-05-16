#include <stdio.h>

int main(void)
{
	int ch;
	FILE *src;
	fopen_s(&src, "src.txt", "rt");
	FILE *dst;
	fopen_s(&dst, "dst.txt", "at");

	if (src == NULL || dst == NULL) 
	{
		puts("���� ���� ����");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) //fgetc(read���Ͻ�Ʈ��), getc(read���Ͻ�Ʈ���� ����)
		fputc(ch, dst); //fputc(write���Ͻ�Ʈ��), putc(write���Ͻ�Ʈ���� ����)

	if(feof(src) != 0) //���� ������ �б� 0�� �ƴҽ� ���� �� ����
		puts("���� ��� �Ϸ�");
	else
		puts("���� ��� ����");	

	fclose(src);
	fclose(dst);

	return 0;
}