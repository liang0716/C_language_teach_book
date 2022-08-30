//4-11
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int a, b;
	
	printf("請輸入你的學號(0~999):");
	scanf("%d", &a);
	fflush(stdin);
	printf("\n");
	
	printf("請輸入你的年齡(0~99):");
	scanf("%d", &b);
	fflush(stdin);
	printf("\n");
	
	printf("你的學號: %d, 你的年齡: %d", a, b);
	
	printf("\n");
	system("pause");
	return 0;	
}
