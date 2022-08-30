//4-19
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int num;
	char ch;
	
	printf("請輸入一個整數: ");
	scanf("%d", &num);
	printf("\n");
	
	
	fflush(stdin);
	
	
	printf("請輸入一字元: ");
	ch = getchar(); 
	printf("\n");


	printf("num = %d, ASCII of ch = %d", num, ch);

	system("pause");
	return 0;
}

