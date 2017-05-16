#include <stdio.h>
#define PI 3.14

typedef struct __Point
{
	double xPos;
	double yPos;
} Point;

typedef struct __Circle
{
	Point center;	//���� �߽�
	double rad;	//������
} Circle;

void ShowCircleInfo(const Circle *ptr)
{
	printf("���� �߽� : [%g %g] \n", (ptr->center).xPos, (ptr->center).yPos);
	printf("���� ���� : %g \n", (ptr->rad) * (ptr->rad) * PI);
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