// EX12_2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "stdio.h"

int main(void)
{
	char ch1 = 'A';
	short ch2 = 'A' - 'B' + 'C'; //abc�� 65, 66, 67�̱� ������ 65 - 66 + 67�̶� 66 'B'���ȴ�
	int ch3 = 'C' % 12; //67 % 12�� 7�̶� ��������� ���

	printf("%c %c %c\n", ch1, ch2, ch3);
	printf("%d %d %d\n", ch1, ch2, ch3);

	printf("�̽������� ������ ����� : %d\n", '\a');

    return 0;
}

