#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[20] = "1234567890";
	char dest1[20];
	char dest2[20];

	/*
	�������ϴٳ� 
	strcpy(dest1, src);
	strncpy(dest2, src, strlen(src));
	*/

	strcpy_s(dest1, strlen(src),  src);
	strncpy_s(dest2, strlen(src),  src, strlen(src));

	printf("dest1 : %s \n", dest1);
	printf("dest2 : %s \n", dest2);

	return 0;
}