#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void)
{
	double x1, y1;
	double x2, y2;
	double result;

	/*printf("점1의 x좌표와 y좌표를 입력하세요.");
	scanf_s("%lf %lf", &x1, &y1, sizeof(4));

	printf("\n점2의 x좌표와 y좌표를 입력하세요.");
	scanf_s("%lf %lf", &x2, &y2, sizeof(4));*/

	printf("점1의 x좌표와 y좌표를 입력하세요.");
	scanf("%lf %lf", &x1, &y1);

	printf("\n점2의 x좌표와 y좌표를 입력하세요.");
	scanf("%lf %lf", &x2, &y2);

	result = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	result = sqrt(result);

	printf("\n두 점의 거리는 %f 입니다.", result);

	return 0;
}