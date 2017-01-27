#include <stdio.h>
int fct1(void);
int fct2(void);
int fct3(void);

int val;	//전역변수 val

int main(void)
{
	printf("%d \n", val);
	fct1();
	fct2();
	fct3();

	return 0;
}

int fct1(void) 
{
	val++;
	printf("%d \n", val);
}

int fct2(void)
{
	val++;
	printf("%d \n", val);
}

int fct3(void)
{
	int val = 0;
	val++;
	printf("%d \n", val);
}
