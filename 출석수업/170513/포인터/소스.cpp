#include <stdio.h>

void swap(int *x, int *y);

int *s; //���������� �����Ⱚ���� �ʱ�ȭ �ȴ�

int z; // ���������� static�� ����


int main(void)
{
	int a = 3, b = 5;
	printf("ȣ���� a = %d, b = %d \n", a, b);
	swap(&a, &b); //swap�Լ��� a,b������ �ּҰ��� �־��

	printf("ȣ���� a = %d, b = %d \n", a, b);

	int *k = &a; //���������� ������ ������ �ݵ�� �ʱ�ȭ �� �� ����Ͽ��� �Ѵ�
	

	int k2;
	//*k = &a; //������ ������ �ʱ�ȭ �� �� ����Ͽ��� �Ѵ�

	*k = b;
	//k2 = ;

	int x;

	printf("%d \n", &s);

	return 0;
}

void swap(int *x, int *y) 
{
	int temp;
	temp = *x; //*x����Ű�� �ִ� �ּ��� ���� �����϶�
	*x = *y;
	*y = temp;
}