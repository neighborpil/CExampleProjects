#include <stdio.h>

int main(void)
{
	char a = 'A'; //���� A
	char b = 'P'; //���� P

	printf("A�� �ƽ�Ű �ڵ� �� : %d \n", a); //���� A�� �ƽ�Ű �ڵ尪 ���
	printf("P�� �ƽ�Ű �ڵ� �� : %d \n\n", b); //���� P�� �ƽ�Ű �ڵ尪 ���

	printf("A~P���� ��� \n");
	for (int i = (int)a; i <= (int)b; i++) //A���� P�� �ƽ�Ű �ڵ尪���� for�� �ݺ�
	{
		printf("%c ", i); //���� ���
	}
	printf("\n");

	return 0;
}