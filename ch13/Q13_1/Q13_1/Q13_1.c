#include <stdio.h>

int addMoney(int money);

int main(void)
{
	int money;
	char cAdd = 'n';

	while (cAdd != 'y')
	{
		money = 0;
		printf("입금할 돈을 입력하세요\n");
		scanf_s("%d", &money);

		printf("총액 : %d\n", addMoney(money));

		//fflush(stdin);

		printf("그만 저금 하시겠습니까?y/n\n");
		scanf_s(" %c", &cAdd);

		if (cAdd == 'y')
		{
			money = 0;
			printf("총액 : %d\n", addMoney(money));
		}
	}
	return 0;
}

int addMoney(int money)
{

	static moneyBox;

	moneyBox += money;

	return moneyBox;
}