#include <stdio.h>
#define HIT_NUM 5
#define TEST1


int main(void)
{
#if HIT_NUM == 5
	printf("��ũ�� ��� HIT_NUM�� 5�Դϴ� \n");
#else
	printf("��ũ�� ��� HIT_NUM�� 5�� �ƴմϴ� \n");
#endif

#ifdef TEST
	puts("TEST�� �����Ѵ�");
#else
	puts("TEST�� ����");
#endif

	return 0;
}