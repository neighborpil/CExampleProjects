#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[20] = "1234567890";
	char dest1[20];
	char dest2[20];

	/*
	안전안하다네 
	strcpy(dest1, src);
	strncpy(dest2, src, strlen(src));
	*/

	strcpy_s(dest1, sizeof(src),  src);
	strncpy_s(dest2, sizeof(src),  src, strlen(src) + 1);

	printf("dest1 : %s \n", dest1);
	printf("dest2 : %s \n", dest2);

	return 0;
}