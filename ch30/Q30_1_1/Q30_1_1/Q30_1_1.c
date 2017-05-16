#include <stdio.h>

#define MALLOCK(TYPE, LEN) ((TYPE*)malloc(sizeof(TYPE) * (LEN)));
#define FREE(ADDR) free(ADDR); ADDR = NULL;

int main(void)
{
	int *ptr;

	ptr = MALLOCK(int, 5);

	if (ptr == NULL)
		puts("메모리 공간 할당 실패 !");


	ptr[0] = ptr[1] = ptr[2] = ptr[3] = ptr[4] = 7;
	printf("배열 시작 : %d \n", ptr[0]);
	printf("배열 중간 : %d \n", ptr[2]);
	printf("배열 끝 : %d \n", ptr[4]);

	FREE(ptr);

	return 0;

}