#include <stdio.h>

int addMoney(int money);

int main(void)
{
	int money;
	char cAdd = 'n';

	while (cAdd != 'y')
	{
		money = 0;
		printf("�Ա��� ���� �Է��ϼ���\n");
		scanf_s("%d", &money);

		printf("�Ѿ� : %d\n", addMoney(money));

		//fflush(stdin);

		printf("�׸� ���� �Ͻðڽ��ϱ�?y/n\n");
		scanf_s(" %c", &cAdd);

		if (cAdd == 'y')
		{
			money = 0;
			printf("�Ѿ� : %d\n", addMoney(money));
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