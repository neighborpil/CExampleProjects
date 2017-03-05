#include <stdio.h>
#include <string.h>	

void LexiCmp(char* str1, char* str2);
void LexiPartialCmp(char* str1, char* str2, int len);

int main(void)
{
	char str1[] = "It's possible to master C";
	char str2[] = "It's impossible to master C";
	char str3[] = "It's possible to master C in a month or two";

	LexiCmp(str1, str2);
	LexiCmp(str1, str3);
	LexiPartialCmp(str1, str3, 25);
	return 0;
}

void LexiCmp(char* str1, char* str2)
{
	int ret = strcmp(str1, str2);
	
	if (ret == 0)
		puts("�� ���ڿ��� �����մϴ�");
	else if (ret < 0)
		printf("�ռ��� ���ڿ� : %s \n", str1);
	else
		printf("�ռ��� ���ڿ� : %s \n", str2);
}

void LexiPartialCmp(char* str1, char* str2, int len)
{
	int ret = strncmp(str1, str2, len);

	if (ret == 0)
		printf("%d��° ���ڱ��� �� ���ڿ��� �����մϴ�. \n", len);
	if (ret < 0)
		printf("�ռ��� ���ڿ� : %s \n", str1);
	if (ret > 0)
		printf("�ڼ��� ���ڿ� : %s \n", str2);
}