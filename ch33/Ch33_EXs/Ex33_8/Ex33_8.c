#include <stdio.h>
#define BUFF_SIZE 30;

int main(void)
{
	char str1[100];
	char str2[100];

	//char str1[BUFF_SIZE];
	//char str2[BUFF_SIZE];
	
	printf("gets read : ");
	gets(str1);

	printf("fgets read : ");
	fgets(str2, 100, stdin);
	//fgets(str1, BUFF_SIZE, stdin);

	printf("%s %s", str1, str2);
	puts(str1);
	fputs(str1, stdout); //°³Çà X
	

	return 0;
}