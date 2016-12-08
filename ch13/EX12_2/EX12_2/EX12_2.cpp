// EX12_2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

int main(void)
{
	char ch1 = 'A';
	short ch2 = 'A' - 'B' + 'C'; //abc는 65, 66, 67이기 때문에 65 - 66 + 67이라 66 'B'가된다
	int ch3 = 'C' % 12; //67 % 12는 7이라서 경고음으로 뜬다

	printf("%c %c %c\n", ch1, ch2, ch3);
	printf("%d %d %d\n", ch1, ch2, ch3);

	printf("이스케이프 시퀀스 경고음 : %d\n", '\a');

    return 0;
}

