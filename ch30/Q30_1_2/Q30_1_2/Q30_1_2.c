#include <stdio.h>
#include <string.h>

#define MALLOC(type, length)	((type*)malloc(sizeof(type) * (length)))
#define FREE(ptr) (free(ptr)); ((ptr) = (NULL));

int main(void)
{
	int * ptr;
	ptr = MALLOC(int, 5);

	if (ptr == NULL)
		puts("메모리 할당 실패");

	for (int i = 0; i < 5; i++)
	{
		ptr[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", ptr[i]);
	}
	

	FREE(ptr);

	return 0;
}