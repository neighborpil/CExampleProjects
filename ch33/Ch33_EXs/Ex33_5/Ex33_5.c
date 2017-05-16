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
		puts("파일 기록 실패");
		return -1;
	}

	while (fgets(str, BUF_SIZE, src) != NULL) //fgets(문자열, 버퍼사이즈, read파일스트림), 개행(\n)과 NULL까지 읽어들임
		fputs(str, dst); //fputs(문자열, wrtie파일스트림

	if (feof(src) != 0) //0이 아닐시 파일 끝 도달
		puts("파일 복사 성공");
	else
		puts("파일 복사 실패");

	fclose(src);
	fclose(dst);

	return 0;
}
