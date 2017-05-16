#include <stdio.h>
#define ARRY_LEN 3
#define NAME_LEN 30
#define PID_LEN 15

typedef struct __Person 
{
	char Name[NAME_LEN];
	char ID[PID_LEN];
	unsigned int Age;
} Person;

void ShowPersonData(Person *ptr);

int main(void)
{
	int i;
	Person personArr[ARRY_LEN] =
	{
		{ "ÇÑÇÑÇÑ", "999999-1222222", 20 },
		{ "±è±è±è", "999999-1113332", 21 },
		{ "³ë³ë³ë", "999999-1212121", 22 }
	};

	for (i = 0; i < ARRY_LEN; i++)
		ShowPersonData(&personArr[i]);

	return 0;
}

void ShowPersonData(Person *ptr)
{
	printf("ÀÌ¸§ : %s \n", (*ptr).Name);
	printf("ÁÖ¹Îµî·Ï ¹øÈ£ : %s \n", (*ptr).ID);
	printf("³ªÀÌ : % u \n", ptr->Age);
}
