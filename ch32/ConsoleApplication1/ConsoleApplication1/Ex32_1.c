#include <stdio.h>
#include <string.h>

typedef union __uniBox
{
	char data1[15];
	char data2[30];
	char data3[45];
} UniBox;

int main(void)
{
	UniBox uni;
	printf("공용체 UniBox의 크기 : %d 바이트 \n", sizeof(uni));

	strcpy_s(uni.data3, sizeof(uni), "공유합시다");
	puts(uni.data1);
	puts(uni.data2);

	strcpy_s(uni.data1, sizeof(uni), "변경되었습니다");
	puts(uni.data2);
	puts(uni.data3);

	return 0;
}