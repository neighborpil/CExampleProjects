#include <stdio.h>

int main(void)
{
	int n1 = 10, n2 = 20, n3 = 30;
	int* arr[3] = { &n1, &n2, &n3 };

	int** dPtr = &arr[0];
	printf("%d, %d, %d \n", **dPtr, **(dPtr + 1), **(dPtr + 2)); //��� �����ʹ� ũ�Ⱑ 4�̹Ƿ� 1�� ���ϸ� �����ϴ� ���� ũ��� 4�̴�
																 //�� arr�迭�� ���� ���������� �迭�� �������̴�

	return 0;
}