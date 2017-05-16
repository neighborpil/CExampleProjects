#include <stdio.h>
#define BUFF_SIZE 30
#define true 1
#define false 0

int main(void)
{
	char buf[BUFF_SIZE];
	int readCnt;

	FILE *src;
	fopen_s(&src, "cat.jpg", "rb"); //���̳ʸ���� rb
	FILE *dst;
	fopen_s(&dst, "cat2.jpg", "wb"); //���̳ʸ���� wb

	if (src == NULL || dst == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}

	while (true)
	{
		readCnt = fread((void*)buf, 1, BUFF_SIZE, src); //fread(�����ּ�, 1����Ʈũ���� ������, ���ۻ�����, src)

		if (readCnt < BUFF_SIZE) 
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, dst); //fwrite(�����ּ�, 1����Ʈũ���� ������, �о���� ������ ������, dst)
				puts("���Ϻ��� �Ϸ�");
				break;
			}
			else
				puts("���Ϻ��� ����");

			break;
		}
		fwrite((void*)buf, 1, BUFF_SIZE, dst);
	}

	fclose(src);
	fclose(dst);

	return 0;
}