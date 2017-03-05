#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "Your name is ";
	char str2[20];

	printf("이름을 입력하세요 : ");
	gets(str2);
	
	//strcat(str1, str2);
	strcat_s(str1, sizeof(str1), str2); //strcat_s(dest, sizeof(dest), src);
	puts(str1);

	return 0;
}