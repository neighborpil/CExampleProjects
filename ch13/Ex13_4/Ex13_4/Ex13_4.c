#include <stdio.h>

int Increment(register int n)  //�Ű������� register ������ ����Ǿ���, �Լ��� ũ�Ⱑ �۾Ƽ� �޸� ������ �����ϴ� �ð���
{							   //���� �����Ƿ� �������� ������ �����Ҹ� �ϴ�
	return n + 1;
}

int main(void)
{
	register int num = 10; //���������� �������� ������ �����Ͽ���

	num = Increment(num);
	printf("%d \n", num);

	num = Increment(num);
	printf("%d \n", num);

	num = Increment(num);
	printf("%d \n", num);

	return 0;
}