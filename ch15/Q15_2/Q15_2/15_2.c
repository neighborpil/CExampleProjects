#include <stdio.h>

void ShowBitList(unsigned short num);

int main(void)
{
	//my solution1
	unsigned short msk1 = 0x5555; /* 0101 0101 0101 0101 */

	unsigned short data = 0xffff; /* 1111 1111 1111 1111 */

	/*
	결과는 1010 1010 1010 1010이 되어야 한다
	0xaaaa
	*/

	printf("%d, %x \n", data, data);
	
	data =~ msk1;

	printf("%d, %x \n", data, data);

	//홀수번째 비트를 전부 0으로 해야되기 때문에 해답이 아니다

	printf("\n");
	printf("========================= \n");
	printf("\n");
	
	//solution
	unsigned short num1 = 0xffff;
	unsigned short num2 = 0xff00;

	unsigned short bitMask = 0xAAAA;

	printf("num1 비트 열 : "); ShowBitList(num1);
	printf("num2 비트 열 : "); ShowBitList(num2);
	printf("bitMask 비트 열 : "); ShowBitList(bitMask);

	num1 &= bitMask; //16개의 bit로 이루어진 unsigned short의 각각의 bit를 비교하여 그 결과를 나타낸다
	num2 &= bitMask;

	printf("num1 마스킹 결과 : "); ShowBitList(num1);
	printf("num2 마스킹 결과 : "); ShowBitList(num2);

	return 0;
}

//하나의 unsigned short를 집어 넣어 그 숫자의 bit배열을 보는 메소드
void ShowBitList(unsigned short num)
{
	int intLen;	//입력한 num의 bit의 길이를 담는 변수
	int i;
	intLen = sizeof(unsigned short) * 8; // 2byte * 8 = 16

	for (i = 0; i < intLen; i++)
	{
		if (i != 0 && i % 8 == 0)
			printf("");

		printf("%d", num >> ((intLen - 1) - i) & 1); //num의 15번 오른쪽으로 밀어서 2^15승만큼 나누면(배열은 0부터 시작이므로
													 //실제로는 2^16승자리, 즉 1의 자리)와 1을 and 연산하고 같으면 1 출력
	} //16번이 지나면 \n
	printf("\n");
}