#include <stdio.h>
#define PI 3.14

typedef struct __Point
{
	double xPos;
	double yPos;
} Point;

typedef struct __Circle
{
	Point center;	//원의 중심
	double rad;	//반지름
} Circle;

void ShowCircleInfo(const Circle *ptr)
{
	printf("원의 중심 : [%g %g] \n", (ptr->center).xPos, (ptr->center).yPos);
	printf("원의 넓이 : %g \n", (ptr->rad) * (ptr->rad) * PI);
}

int main(void)
{
	Circle cl = {
		{1.1, 2.2},
		2.5
	};

	ShowCircleInfo(&cl);

	return 0;
}