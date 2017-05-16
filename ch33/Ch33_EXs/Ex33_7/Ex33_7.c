#include <stdio.h>
#define BUFF_SIZE 30

int main(void)
{
	int ch;
	char str[BUFF_SIZE];
	int num;

	//문자의 입력과 출력
	ch = fgetc(stdin);
	fputc(ch, stdout);
	ch = getc(stdin); //엔터\n을 입력받기 위해 한번더 적음
	putc(ch, stdout);

	//문자열 입출력
	fgets(str, BUFF_SIZE, stdin); //엔터\n까지 읽음
	fputs(str, stdout);

	//서식 문자열 형태의 입출력
	fscanf_s(stdin, "%d %c", &num, &ch);
	fprintf(stdout, "숫자 : %d, 문자 : %c \n", num, ch);

	return 0;
}