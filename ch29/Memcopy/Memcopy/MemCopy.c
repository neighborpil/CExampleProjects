#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ptr_src = "Have a nice Day!";
	char *ptr_dest;

	ptr_dest = (char *)malloc(20);
	memcpy(ptr_dest, ptr_src, strlen(ptr_src) + 1);	//NULL문자 포함위해 + 1

	printf("%s \n", ptr_dest);

	free(ptr_dest);

	return 0;
}