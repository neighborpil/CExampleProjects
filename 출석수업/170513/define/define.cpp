#include <stdio.h>

#define MyName "ȫ�浿"
#define Hap1(x, y) x+y
#define CONDTION 1

int main()
{
	printf("%s \n", MyName);
	int h1, h2, g1, g2;
	h1 = 10 * Hap1(3, 4);
	printf("%d \n", h1); //��� : 10 * 3 + 4

	//�������� 1, 0���� �Ǵ�
#if CONDTION
	printf(" A ���α׷� ������ \n");
#else
	puts("B ���α׷� ������ \n");
#endif

	printf("%.1f \n", 10.1f); //�Ҽ� ù��¥������ ���



	return 0;
}