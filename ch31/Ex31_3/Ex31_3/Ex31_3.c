#include <stdio.h>

struct Point 
{
	double xPos;
	double yPos;
};

typedef struct Point Point;
typedef struct Point POINT;

int main(void)
{
	Point p1;
	POINT p2;

	p1.xPos = 0.1, p1.yPos = 0.2;
	p2.xPos = 2.4, p2.yPos = 2; 5;

	printf("X축 거리 : %g \n", p2.xPos - p1.xPos);
	printf("Y축 거리 : %g \n", p2.yPos - p1.yPos);

	return 0;
}