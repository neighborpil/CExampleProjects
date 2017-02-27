#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

char* ReadString(void);
int* ReadInteger(void);

int main(void)
{
	char* strPtr;
	int* numPtr;

	strPtr = ReadString();
	numPtr = ReadInteger();

	if (strPtr != NULL)
		printf("읽어 들인 문자열 : %s \n", strPtr);
	if (numPtr != NULL)
		printf("읽어 들인 정수 : \n", *numPtr);

	free(strPtr);
	strPtr = NULL; //free로 해제한 뒤에는 반드시 NULL로 초기화
	free(numPtr);
	numPtr = NULL;

	return 0;
}

char* ReadString(void)
{
	char* sPtr = (char*)malloc(sizeof(char) * 20); //힙 영역에 메모리 주소 및 공간 배치
	if (sPtr == NULL)
		return NULL;

	printf("문자열 입력 : ");
	scanf("%s", sPtr);
	
	return sPtr;
}

int* ReadInteger(void)
{
	int* iPtr = (int*)malloc(sizeof(int));
	if (iPtr == NULL)
		return NULL;

	printf("정수 입력 : ");
	scanf("%d", iPtr);
	return iPtr;
}