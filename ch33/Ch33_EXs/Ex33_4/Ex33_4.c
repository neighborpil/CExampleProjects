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
		puts("파일 오픈 실패");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) //fgetc(read파일스트림), getc(read파일스트림과 동일)
		fputc(ch, dst); //fputc(write파일스트림), putc(write파일스트림과 동일)

	if(feof(src) != 0) //파일 마지막 읽기 0이 아닐시 파일 끝 도달
		puts("파일 기록 완료");
	else
		puts("파일 기록 실패");	

	fclose(src);
	fclose(dst);

	return 0;
}