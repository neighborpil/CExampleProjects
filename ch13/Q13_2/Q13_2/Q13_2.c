#include <stdio.h>

double getAbs(double num);

int main(void)
{
	double num = 0;
	while (num != -100) 
	{
		printf("숫자를 입력하세요\n(끝내려면 -100입력)\n");
		scanf_s(" %lf", &num);

		printf("절대값 : %f\n", getAbs(num));
	}
	
	return 0;
}

double getAbs(double num)
{
	static double _num;

	if (num == 0)
		return _num;

	if (num > 0)
		_num = num;
	else
		_num = -num;

	return _num;
}