//4-17
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a, b;
	printf("輸入第一字元:");
	scanf("%c", &a);
	
	printf("\n");
	//(3) 或是使用fflush(stdin); 
	printf("輸入第二字元:");// 
	scanf(" %c", &b);//要在%c前多打空白鍵，使scanf只吃非空白或非Enter的字元 
	printf("\n");
	

	printf("a = %c, b = %c\n", a, b);
	system("pause");
	return 0;
}

