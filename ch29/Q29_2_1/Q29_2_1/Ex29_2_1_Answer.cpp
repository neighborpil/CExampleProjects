#include <stdio.h>
#include <string.h>

char* AddStringOne(char des[], char src[], int desLen);

int main(void)
{
	char str1[20] = "Your name is ";
	char str2[20];
	char *ret;

	while (1)
	{
		printf("�̸��� �Է��ϼ��� : ");
		gets_s(str2, sizeof(str2)); //20���� �̻��̸� �ַ�
		ret = AddStringOne(str1, str2, sizeof(str1) / sizeof(char));

		if (ret != NULL)
			break;
		else
			puts("�ʹ� ��� �ٽ�");
	}
	puts(str1);

	return 0;
}

char* AddStringOne(char dest[], char src[], int desLen)
{
	int dStrLen = strlen(dest);
	int sStrLen = strlen(src);
	int maxAddLen = desLen - dStrLen;

	if (maxAddLen > sStrLen)	//������ �����ϴٸ�
	{
		strcat_s(dest, 20, src);
		return src;
	}
	else
		return NULL;

}