#include <stdio.h>

int Add(int n1, int n2) 
{
	int result = n1 + n2;
	return result;
}

int Min(int n1, int n2)
{
	return n1 - n2;
}

int main(void)
{
	int addResult;

	addResult = Add(3, 5);
	printf("���� ��� : %d\n", addResult);

	printf("���� ��� : %d\n", Min(3, 5));

	return 0;
}