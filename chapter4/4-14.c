//4-14 4-15
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//14-14
	int a;
	printf("輸入一個十進位數字(ex: 413546):\n");
	scanf("%d", &a);
	printf("10進制 = %d, 8進制: %o, 16進制: %x\n", a, a, a);
	
	
	//14-15
	int b;
	printf("輸入一個十進位數字(ex: 0xFda10 or Fda10):\n");
	scanf("%x", &b);
	printf("10進制 = %d, 8進制: %o, 16進制: %x", b, b, b);


	printf("\n");
	system("pause");
	return 0;
}

