//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[20] = "Your name is ";
//	char str2[20];
//
//	int str1Length = sizeof(str2);
//	int str2Length = 0;
//
//	do 
//	{
//		printf("이름을 입력하세요 : ");
//		gets(str2);
//		
//		str2Length = strlen(str2);
//
//		if (str2Length > str1Length) 
//		{
//			printf("이름이 너무 깁니다 새로 입력하세요 \n ");
//
//			int c;
//			while ((c = getchar()) != '\n' && c != EOF);
//		}
//
//	} while (str2Length > str1Length);
//	
//	strcat_s(str1, sizeof(str2) - 1, str2); 
//	puts(str1);
//
//	return 0;
//}
