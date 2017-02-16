#include <stdio.h>

int SimpleGCM(int num1, int num2);

int SimpleLCM(int num1, int num2);

int main(void)
{
	int num1, num2;
	int gcm = 0;
	int lcm = 0;

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);
	gcm = SimpleGCM(num1, num2);
	lcm = SimpleLCM(num1, num2);

	printf("gcm : %d, lcm : %d \n", gcm, lcm);

	return 0;
}

//num1과 num2의 최대 공약수(GCM) 계산
int SimpleGCM(int num1, int num2)
{
	int gcm = 0;

	for (int i = num1; i >= 1; i--)
	{
		for (int j = num2; j  >= 1; j--)
		{
			if (num1 % i == 0 && num2 % j == 0 && i == j) 
			{
				gcm = i;
				return gcm;
			}
		}
	}
	return 1;
}

//num1과 num2의 최소 공배수(LCM) 계산
int SimpleLCM(int num1, int  num2)
{
	int lcm;
	int gcm = SimpleGCM(num1, num2);

	lcm = num1 / gcm * num2 / gcm * gcm;

	return lcm;
}