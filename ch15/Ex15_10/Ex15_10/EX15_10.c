#include <stdio.h>

const int TRUE = 1;
const int FALSE = 0;

int kindSte;
int addSte;
int minSte;

void SetKindSte(int ste);
void SetAddOpSte(int ste);
void SetMinOpSte(int ste);
void ShowOperationResult(int n1, int n2);

int main(void)
{
	SetKindSte(TRUE);
}

void SetKindSte(int ste)
{
	kindSte = ste;

}

void SetAddOpSte(int ste)
{
	addSte = ste;
}

void SetMinSte(int ste)
{
	minSte = ste;
}

void ShowOperationResult(int n1, int n2)
{
	if (kindSte)
	{
		if (addSte)
			printf("%d와 %d의 합은 %d 입니다. \n", n1, n2, n1 + n2);
		if (minSte)
			printf("%d와 %ㅇdml 차는 %d입니다. \n", n1, n2, n1 - n2);
	}
	else
	{
		if (addSte)
			printf("%d + %d = %d \n", n1, n2, n1 + n2);
		if (minSte)
			printf("%d - %d = %d \n", n1, n2, n1 - n1);
	}
}



