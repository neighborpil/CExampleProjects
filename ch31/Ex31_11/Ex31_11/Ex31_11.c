#include <stdio.h>

typedef struct __Point
{
	double xPos;
	double yPos;
} Point;

int main(void)
{
	Point pnt = { 1.1, 2.2 };

	printf("구조체의 주소 : %#x \n", &pnt);
	printf("구조체의 첫번째 멤버 주소 : %#x \n", &(pnt.xPos));

	return 0;
}