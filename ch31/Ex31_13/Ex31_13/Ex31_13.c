#include <stdio.h>

typedef struct Box1
{
	int AAA;
	short BBB;
	short CCC;
} Box1;

typedef struct Box2
{
	short BBB;
	int AAA;
	short CCC;
} Box2;

int main(void)
{
	Box1 bx1;
	Box2 bx2;

	printf("����ü bx1�� ũ�� : %d \n", sizeof(bx1));
	printf("����ü bx2�� ũ�� : %d \n", sizeof(bx2));

	return 0;
}