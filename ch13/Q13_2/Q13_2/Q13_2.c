#include <stdio.h>

double getAbs(double num);

int main(void)
{
	double num = 0;
	while (num != -100) 
	{
		printf("���ڸ� �Է��ϼ���\n(�������� -100�Է�)\n");
		scanf_s(" %lf", &num);

		printf("���밪 : %f\n", getAbs(num));
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