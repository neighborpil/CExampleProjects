#include <stdio.h>

void ShowData(const int * p);

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	const int * ptr = &num1;

	//(*ptr)++ //������ ���� �߻�
	num1++; //������ ����, ������ ����� �� ���� �ƴϴ�, �����͸� �̿��� ���� ���游 �Ұ����ϴ�
	ShowData(&num1);

	ptr = &num2; //������ ptr�� ����Ű�� ������ ���嵵�� ���� ������ �Ұ����ϴ�, ���� ������ ptr�� ����Ű�� ����� ������ �����ϴ�
	ShowData(ptr);

	return 0;
}

//�Լ� �������� ������ ������ �� ������ �Ұ���
void ShowData(const int * p)
{
	/*
	�� �ȿ����� p�� ����Ű�� ������ ����
	�ٲ� �� ����
	*/

	printf("%d \n", *p);
}