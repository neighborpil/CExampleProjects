#include <stdio.h>
#include <string.h>	

int main(void)
{
	char src[20] = "1234567890";
	char dest1[20];
	char dest2[5];

	strcpy_s(dest1, sizeof(src), src);
	strncpy_s(dest2, sizeof(src), src, sizeof(dest2) - 1);	//널 문자 공간 위해 -1
	dest2[sizeof(dest2) - 1] = '\0';	//널 문자 삽입

	printf("dest1 : %s \n", dest1);
	printf("dest2 : %s \n", dest2);

	return 0;
}