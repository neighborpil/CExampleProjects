#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

typedef struct __Point
{
	double xPos;
	double yPos;
} Point;

typedef struct __Circle
{
	Point *cntPtr;	//원의 중심
	double rad;	//반지름
} Circle;

void ShowCircleInfo(const Circle *ptr)
{
	printf("원의 중심 : [%g, %g] \n", (ptr->cntPtr)->xPos, (ptr->cntPtr)->yPos);
	printf("원의 넓이 : %g \n", (ptr->rad) * (ptr->rad) * PI);
}

int main(void)
{
	Circle cl = { NULL, 2.5 };
	cl.cntPtr = (Point*)malloc(sizeof(Point));

	cl.cntPtr->xPos = 1.1;
	cl.cntPtr->yPos = 2.2;

	ShowCircleInfo(&cl);

	return 0;
}