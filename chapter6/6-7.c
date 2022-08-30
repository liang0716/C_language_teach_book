//6-7~6-8
#include <stdio.h>
#include <stdlib.h>

#include "../function_list/power.c" 

int main(void)
{

	char q;
	int a, b, c;
	int square_a, square_b, square_c;
	

	do
	{
		printf("輸入 三個數字 以空白分隔\n");      //來判斷是否為三角形
		scanf("%d %d %d", &a, &b, &c);
		
		square_a = pow_int(a, 2);
		square_b = pow_int(b, 2);
		square_c = pow_int(c, 2);
		printf("%d %d %d\n", square_a, square_b, square_c);
		
		if((a + b > c) && (b + c > a) && (c + a > b))
		{
			printf("this is a triangle.\n");
			
			if((square_a + square_b == square_c) || (square_b + square_c == square_a) || (square_c + square_a == square_b))
			{
				printf(" 直角三角形\n");
			}
			else if((square_a + square_b < square_c) || (square_b + square_c < square_a) || (square_c + square_a < square_b))
			{
				printf(" 鈍角三角形\n");
			}
			else if((square_a + square_b > square_c) || (square_b + square_c > square_a) || (square_c + square_a > square_b))
			{
				printf(" 銳角三角形\n");
			}
		}
		else
		{
			printf("this is NOT a triangle.\n");
		}
		
		
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

