#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "AAA-BBB_CCC-DDD!EEE";
	char * leftOver = NULL;
	char * tok;

	tok = strtok_s(str, "-_!", &leftOver);
	printf("ȣ�� ���� ���ڿ� : %s \n", str);

	return 0;
}