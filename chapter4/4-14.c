//4-14 4-15
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//14-14
	int a;
	printf("��J�@�ӤQ�i��Ʀr(ex: 413546):\n");
	scanf("%d", &a);
	printf("10�i�� = %d, 8�i��: %o, 16�i��: %x\n", a, a, a);
	
	
	//14-15
	int b;
	printf("��J�@�ӤQ�i��Ʀr(ex: 0xFda10 or Fda10):\n");
	scanf("%x", &b);
	printf("10�i�� = %d, 8�i��: %o, 16�i��: %x", b, b, b);


	printf("\n");
	system("pause");
	return 0;
}

