#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "�ѱ۵� �󸶵��� �������ڰ� �� �� �ֽ��ϴ�";
	char * strPtr;

	strPtr = strstr(str, "�� �� �� �ֽ�"); //�� �� �� �ֽ��� �����Ѵ�
	printf("���� ��ġ ���� ���ڿ� : %s \n", strPtr); //����� "�� �� �� �ֽ��ϴ�"

	return 0;
}