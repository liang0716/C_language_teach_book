//4-12
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10], b[10];
	
	printf("請輸入姓氏:");
	scanf("%s", a);
	
	printf("請輸入名字:");
	scanf("%s", b);
	
	printf("Hi, %s %s", b, a);
	
	printf("\n");
	system("pause");
	return 0;
}

