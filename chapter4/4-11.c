//4-11
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int a, b;
	
	printf("�п�J�A���Ǹ�(0~999):");
	scanf("%d", &a);
	fflush(stdin);
	printf("\n");
	
	printf("�п�J�A���~��(0~99):");
	scanf("%d", &b);
	fflush(stdin);
	printf("\n");
	
	printf("�A���Ǹ�: %d, �A���~��: %d", a, b);
	
	printf("\n");
	system("pause");
	return 0;	
}
