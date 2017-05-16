#include <stdio.h>
#define STR_CHG(A, B) #A"¿« ¡˜æ˜¿∫"#B"¿‘¥œ¥Ÿ"
#define PRINT(STR) puts(STR)

int main(void)
{
	PRINT(STR_CHG(¿Ãµø√·, ªÁ≥…≤€));
	PRINT(STR_CHG(¿Ãµø√·1, ªÁ≥…≤€1));

	printf("%s \n", STR_CHG("¿Ãµø√·", "ªÁ≥…≤€"));
	printf("%s \n", STR_CHG("¿Ãµø√·1", "ªÁ≥…≤€1"));

	return 0;
}