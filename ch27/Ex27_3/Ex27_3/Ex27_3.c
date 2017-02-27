#include <stdio.h>

void AddProc(void);
void MinusProc(void);
void CallFunc(void(*fctPtr)(void));

int main(void)
{
	CallFunc(AddProc);
	CallFunc(MinusProc);

	return 0;
}

void CallFunc(void(*fctPtr)(void))
{
	fctPtr();
}

void AddProc(void)
{
	int n1, n2;
	printf("µ¡¼À À§ÇÑ µÎ °³ÀÇ Á¤¼ö ÀÔ·Â : ");
	scanf_s("%d %d", &n1, &n2);
	printf("µ¡¼À °á°ú : %d \n\n", n1 + n2);
}

void MinusProc(void)
{
	int n1, n2;
	printf("»¬¼À À§ÇÑ µÎ °³ÀÇ Á¤¼ö ÀÔ·Â : ");
	scanf_s("%d %d", &n1, &n2);
	printf("µ¡¼À °á°ú : %d \n\n", n1 - n2);
}