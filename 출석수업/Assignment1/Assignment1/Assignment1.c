#include <stdio.h>

//과제 1
int main(void)
{
	int personCnt; //인원수
	int val; //인원별 금액을 받을 변수
	int sum = 0; //합계 금액

	printf("손님수를 입력해 주세요 : ");
	scanf_s("%d", &personCnt, sizeof(personCnt)); //인원 수 받기

	for (int i = 0; i < personCnt; i++)
	{
		printf("\n%d 번째 손님의 음식값을 입력해 주세요 : ", i + 1);
		scanf_s("%d", &val, sizeof(val)); //인원별 값 받기
		
		sum += (int)val; //총액에 더하기

	}

	printf("\n손님수 : %d \n", personCnt); //손님 수 출력

	if (personCnt >= 4)
	{
		sum *= 0.9; //4명 이상시 10% 할인
		printf("총액 : %d \n", sum); //4명 이상 결과 출력
		return 0;
	}

	printf("총액 : %d \n", sum); //4명 미만 결과 출력

	return 0;
}