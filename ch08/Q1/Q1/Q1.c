#include <stdio.h>

double InchToCm(double inch);
double CmToInch(double cm);

int main(void)
{
	int cm1 = 3.5;
	int inch1 = 2.7;
	
	printf("inch : %f\n", CmToInch(cm1));
	printf("cm : %f\n", InchToCm(inch1));

	return 0;
}

double InchToCm(double inch)
{
	double cm = inch * 2.54;
	return cm;
}

double CmToInch(double cm)
{
	double inch = cm / 2.54;
	return inch;
}