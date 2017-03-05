#include <stdio.h>

void ShowBitList(unsigned short num);

int main(void)
{
	//my solution1
	unsigned short msk1 = 0x5555; /* 0101 0101 0101 0101 */

	unsigned short data = 0xffff; /* 1111 1111 1111 1111 */

	/*
	����� 1010 1010 1010 1010�� �Ǿ�� �Ѵ�
	0xaaaa
	*/

	printf("%d, %x \n", data, data);
	
	data =~ msk1;

	printf("%d, %x \n", data, data);

	//Ȧ����° ��Ʈ�� ���� 0���� �ؾߵǱ� ������ �ش��� �ƴϴ�

	printf("\n");
	printf("========================= \n");
	printf("\n");
	
	//solution
	unsigned short num1 = 0xffff;
	unsigned short num2 = 0xff00;

	unsigned short bitMask = 0xAAAA;

	printf("num1 ��Ʈ �� : "); ShowBitList(num1);
	printf("num2 ��Ʈ �� : "); ShowBitList(num2);
	printf("bitMask ��Ʈ �� : "); ShowBitList(bitMask);

	num1 &= bitMask; //16���� bit�� �̷���� unsigned short�� ������ bit�� ���Ͽ� �� ����� ��Ÿ����
	num2 &= bitMask;

	printf("num1 ����ŷ ��� : "); ShowBitList(num1);
	printf("num2 ����ŷ ��� : "); ShowBitList(num2);

	return 0;
}

//�ϳ��� unsigned short�� ���� �־� �� ������ bit�迭�� ���� �޼ҵ�
void ShowBitList(unsigned short num)
{
	int intLen;	//�Է��� num�� bit�� ���̸� ��� ����
	int i;
	intLen = sizeof(unsigned short) * 8; // 2byte * 8 = 16

	for (i = 0; i < intLen; i++)
	{
		if (i != 0 && i % 8 == 0)
			printf("");

		printf("%d", num >> ((intLen - 1) - i) & 1); //num�� 15�� ���������� �о 2^15�¸�ŭ ������(�迭�� 0���� �����̹Ƿ�
													 //�����δ� 2^16���ڸ�, �� 1�� �ڸ�)�� 1�� and �����ϰ� ������ 1 ���
	} //16���� ������ \n
	printf("\n");
}