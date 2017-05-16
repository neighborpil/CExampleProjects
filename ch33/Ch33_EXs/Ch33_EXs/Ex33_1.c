#include <stdio.h>

int main(void)
{
	FILE *fp;
	fopen_s(&fp, "data.txt", "wt"); //fopen_s는 포인터를 처음에 정의해주어야 한다, 포인터 선언과 fopen_s함수를 한줄에 사용 X

	if (fp == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);

	return 0;
}