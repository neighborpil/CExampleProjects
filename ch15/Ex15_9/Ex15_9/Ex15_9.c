#include <stdio.h>

int main(void)
{
	unsigned short data = 0x0000; /* 0000 0000 0000 0000 */ //마스크 씌울 대상

	unsigned short msk1 = 0xf000; /* 1111 0000 0000 0000 */
	unsigned short msk2 = 0x0f00; /* 0000 1111 0000 0000 */
	unsigned short msk3 = 0x00f0; /* 0000 0000 1111 0000 */
	unsigned short msk4 = 0x000f; /* 0000 0000 0000 1111 */

	data |= msk1; //data = data | msk1 와 동일 //data에 마스크1을 씌운 상황 or연산
	printf("result1 = %#.4x \n", data); 

	data |= msk2;
	printf("result2 = %#.4x \n", data);

	data |= msk3;
	printf("result3 = %#.4x \n", data);

	data |= msk4;
	printf("result4 = %#.4x \n", data);

	return 0;
}