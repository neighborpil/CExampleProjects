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
	printf("����ü UniBox�� ũ�� : %d ����Ʈ \n", sizeof(uni));

	strcpy_s(uni.data3, sizeof(uni), "�����սô�");
	puts(uni.data1);
	puts(uni.data2);

	strcpy_s(uni.data1, sizeof(uni), "����Ǿ����ϴ�");
	puts(uni.data2);
	puts(uni.data3);

	return 0;
}