#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void)
{
	double x1, y1;
	double x2, y2;
	double result;

	/*printf("��1�� x��ǥ�� y��ǥ�� �Է��ϼ���.");
	scanf_s("%lf %lf", &x1, &y1, sizeof(4));

	printf("\n��2�� x��ǥ�� y��ǥ�� �Է��ϼ���.");
	scanf_s("%lf %lf", &x2, &y2, sizeof(4));*/

	printf("��1�� x��ǥ�� y��ǥ�� �Է��ϼ���.");
	scanf("%lf %lf", &x1, &y1);

	printf("\n��2�� x��ǥ�� y��ǥ�� �Է��ϼ���.");
	scanf("%lf %lf", &x2, &y2);

	result = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	result = sqrt(result);

	printf("\n�� ���� �Ÿ��� %f �Դϴ�.", result);

	return 0;
}