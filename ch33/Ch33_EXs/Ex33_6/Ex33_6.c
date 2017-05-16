#include <stdio.h>
#define BUFF_SIZE 30
#define true 1
#define false 0

int main(void)
{
	char buf[BUFF_SIZE];
	int readCnt;

	FILE *src;
	fopen_s(&src, "cat.jpg", "rb"); //바이너리모드 rb
	FILE *dst;
	fopen_s(&dst, "cat2.jpg", "wb"); //바이너리모드 wb

	if (src == NULL || dst == NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}

	while (true)
	{
		readCnt = fread((void*)buf, 1, BUFF_SIZE, src); //fread(버퍼주소, 1바이트크기의 데이터, 버퍼사이즈, src)

		if (readCnt < BUFF_SIZE) 
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, dst); //fwrite(버퍼주소, 1바이트크기의 데이터, 읽어들인 데이터 사이즈, dst)
				puts("파일복사 완료");
				break;
			}
			else
				puts("파일복사 실패");

			break;
		}
		fwrite((void*)buf, 1, BUFF_SIZE, dst);
	}

	fclose(src);
	fclose(dst);

	return 0;
}