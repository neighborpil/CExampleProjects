#include <stdio.h>

void CopyArray(int * src, int * dest, int len);
void ShowArrElem(int * ary, int len);

int main(void)
{
	const int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];

	CopyArray(arr1, arr2, 5);	//arr1의 내용을 arr2에 복사!
	ShowArrElem(arr2, 5);

	return 0;
}

void CopyArray(const int * const src, int * const dest, const int len)
{
	int i;
	for (i = 0; i < len; i++)
		dest[i] = src[i];

}

void ShowArrElem(const int * const ary, const int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", ary[i]);
		//len = i+1;
	}
	printf("\n");
}