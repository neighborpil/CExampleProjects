#include <stdio.h>
#define STR_CHG(A, B) #A"�� ������"#B"�Դϴ�"
#define PRINT(STR) puts(STR)

int main(void)
{
	PRINT(STR_CHG(�̵���, ��ɲ�));
	PRINT(STR_CHG(�̵���1, ��ɲ�1));

	printf("%s \n", STR_CHG("�̵���", "��ɲ�"));
	printf("%s \n", STR_CHG("�̵���1", "��ɲ�1"));

	return 0;
}