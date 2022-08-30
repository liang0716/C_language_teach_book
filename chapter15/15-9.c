//15-9 10 11 12 13 
#include <stdio.h>
#include <stdlib.h>

#include "../function_list/leon_head.h" 
int main(void)
{
	int a = 159;
	int b = 0147;
	int c = 0x618A; 
	printf("8: %o, 16:%X\n", a,a);
	printf("10: %d, 16:%X\n", b,b);
	printf("8: %o, 10:%d\n", c,c);

	int num;
	scanf("%o", &num);
	printf("10: %d, 16:%X\n", num, num);
	
	
	show_binary(154);
	show_binary(67);
	printf("154 & 67:\n");
	show_binary(154 & 67);
	printf("\n");
	
	show_binary(154);
	show_binary(67);
	printf("154 | 67:\n");
	show_binary(154 | 67);
	printf("\n");
	
	show_binary(154);
	show_binary(67);
	printf("154 ^ 67:\n");
	show_binary(154 ^ 67);
	printf("\n");

	show_binary(154);
	printf("154 >>2 :\n");
	show_binary(154>>2);
	printf("\n");
	system("pause");
	return 0;
}

