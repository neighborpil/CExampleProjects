#include <stdio.h>
#include <math.h>
#define POINT_NUMBER 5

double CalcDist(double x1, double y1, double x2, double y2);
double CalcLineLen(double xpos[], double ypos[]);

int main(void)
{
	double lineLen = 0;
	double xPosArr[POINT_NUMBER];
	double yPosArr[POINT_NUMBER];

	int i;
	for (i = 0; i < POINT_NUMBER; i++)
	{
		printf("점 %d의 좌표 입력 : ", i + 1);
		scanf_s("%lf %lf", &xPosArr[i], &yPosArr[i], sizeof(xPosArr), sizeof(int));
	}
	
	lineLen = CalcLineLen(xPosArr, yPosArr);
	printf("라인의 총 길이 : %g \n", lineLen);

	return 0;
}

double CalcDist(double x1, double y1, double x2, double y2) 
{
	double xDist = x1 - x2;
	double yDist = y1 - y2;

	return sqrt(xDist * xDist + yDist * yDist);
}

double CalcLineLen(double xpos[], double ypos[])
{
	double len = 0;
	int i;
	for (i = 0; i < POINT_NUMBER - 1; i++)
		len += CalcDist(xpos[i], ypos[i], xpos[i + 1], ypos[i + 1]);

	return len;
}