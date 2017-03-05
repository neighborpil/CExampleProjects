#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "AAA-BBB_CCC-DDD!EEE";
	char * tok;
	char * leftOver = NULL;
	int cnt = 0;

	tok = strtok_s(str, "-_!", &leftOver); //strtok_s의 경우에는 남은 string을 저장할 변수를 하나 만들어야 한다, 남은것은 거기에 저장된다
										   //그리고 자른 것은 tok안에 들어가고
	while (tok != NULL)	//토큰이 널이 아닐 때까지 계속 자른다
	{
		cnt++;
		printf("토큰 %d : %s \n", cnt, tok);
		tok = strtok_s(NULL, "-_!", &leftOver);
	}

	return 0;
}