#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[20] = "1234567890";
	char dest[5];

	//strncpy_s(dest, sizeof(dest), src, strlen(dest) - 1);
	strncpy_s(dest, sizeof(dest), src, _TRUNCATE);
	dest[sizeof(dest) - 1] = '\0';

	printf("dest : %s \n", dest);

	return 0;
}