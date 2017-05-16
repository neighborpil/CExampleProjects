#include <stdio.h>

//과제2
int main(void)
{
	int sum = 0; //총합

	for (int i = 1; i <= 1000; i++) //1~1000까지 루프
	{
		if (i % 7 == 0) //i를 7로 나누어 나머지가 0이라면
		{
			printf("%d \t", i); //i 출력
			sum += i; // 합계에 더하기
		}
	}

	printf("\n\nsum : %d \n", sum); //합계 출력

	return 0;
}