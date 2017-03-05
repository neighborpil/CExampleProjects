#include <stdio.h>
#include <string.h>

char* AddStringOne(char des[], char src[], int desLen);

int main(void)
{
	char str1[20] = "Your name is ";
	char str2[20];
	char *ret;

	printf("이름을 입력하세요 : ");

	gets_s(str2, sizeof(str2)); //20글자 이상이면 애러
	ret = AddStringOne(str1, str2, sizeof(str1) / sizeof(char));

	if(ret != NULL)
		puts(ret);

	return 0;
 }

char* AddStringOne(char dest[], char src[], int desLen)
{
	int dStrLen = strlen(dest);
	int sStrLen = strlen(src);
	int maxAddLen = desLen - dStrLen;

	if (maxAddLen > sStrLen)	//덧붙임 가능하다면
	{
		strcat_s(dest, 20, src);
		return dest;
	}
	else 
	{
		strncat_s(dest, 20, src, maxAddLen - 1);
		return dest;
	}
		

}