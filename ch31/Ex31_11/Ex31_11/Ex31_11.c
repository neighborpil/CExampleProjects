#include <stdio.h>

typedef struct __Point
{
	double xPos;
	double yPos;
} Point;

int main(void)
{
	Point pnt = { 1.1, 2.2 };

	printf("����ü�� �ּ� : %#x \n", &pnt);
	printf("����ü�� ù��° ��� �ּ� : %#x \n", &(pnt.xPos));

	return 0;
}