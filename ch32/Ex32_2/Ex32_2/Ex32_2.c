#include <stdio.h>

typedef struct __DbShort
{
	unsigned short upper;
	unsigned short lower;
} DbShort;

typedef union __ReadBuf
{
	int iBuf;
	char bBuf[4];
	DbShort sBuf;
} ReadBuf;

int main(void)
{
	ReadBuf buf;
	printf("sizeof buf : %d \n", sizeof(buf));
 	printf("���� �Է� : ");
	scanf_s("%d", &(buf.iBuf), sizeof(buf));

	printf("���� 2����Ʈ : %u \n", buf.sBuf.upper);
	printf("���� 2����Ʈ : %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ� : %c \n", buf.bBuf[0]);
	printf("���� 1����Ʈ �ƽ�Ű �ڵ� : %c \n", buf.bBuf[3]);

	return 0;
}