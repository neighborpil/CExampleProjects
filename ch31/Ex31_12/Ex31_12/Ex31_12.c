#include <stdio.h>

typedef struct Box
{
	int data;
	struct Box * boxRef;
} Box;

int main(void)
{
	int i;
	Box *bxPtr;

	Box b1 = { 1, NULL };
	Box b2 = { 11, NULL };

	b1.boxRef = &b2;
	b2.boxRef = &b1;

	bxPtr = &b1;

	for (i = 1; i <= 10; i++)
	{
		printf("%3d", bxPtr->data);
		(bxPtr->data)++;
		bxPtr = bxPtr->boxRef;
		if (!(i % 2))
			printf("\t");
	}

	return 0;
}