#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "AAA-BBB_CCC-DDD!EEE";
	char * tok;
	char * leftOver = NULL;
	int cnt = 0;

	tok = strtok_s(str, "-_!", &leftOver); //strtok_s�� ��쿡�� ���� string�� ������ ������ �ϳ� ������ �Ѵ�, �������� �ű⿡ ����ȴ�
										   //�׸��� �ڸ� ���� tok�ȿ� ����
	while (tok != NULL)	//��ū�� ���� �ƴ� ������ ��� �ڸ���
	{
		cnt++;
		printf("��ū %d : %s \n", cnt, tok);
		tok = strtok_s(NULL, "-_!", &leftOver);
	}

	return 0;
}