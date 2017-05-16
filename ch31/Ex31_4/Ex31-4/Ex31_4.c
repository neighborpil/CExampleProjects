#include <stdio.h>

struct __Point
{
	double xPos;
	double yPos;
};

typedef struct __Point Point;

Point IncrePos(Point pnt);

int main(void)
{
	Point p1, p2, p3;
	p1.xPos = 0.5;
	p1.yPos = 1.5;

	p2 = p1;
	p3 = IncrePos(p2);

	printf("X : %g \n", p3.xPos);
	printf("Y : %g \n", p3.yPos);

	return 0;
}

//Point의 값을 1씩 증가
Point IncrePos(Point pnt)
{
	pnt.xPos += 1;
	pnt.yPos += 1;

	return pnt;
}