#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "12344567";
	char str2[] = "���α׷���";
	char str3[] = "C Programming";

	printf("%s : %d \n", str1, strlen(str1));
	printf("�迭 ũ�� : %d \n", sizeof(str1));

	printf("%s : %d \n", str2, strlen(str2));
	printf("�迭 ũ�� : %d \n", sizeof(str2));

	printf("%s : %d \n", str3, strlen(str3));
	printf("�迭 ũ�� : %d \n", sizeof(str3));

}