//
#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"



int main(void)
{
	int num;
	float  a, b;
	
	printf("key a num: \n");
	scanf(" %d", &num);
	
	printf("SQUARE(x) = %d\n", SQUARE(num));
	printf("CUBIC(x) = %d\n", CUBIC(num));
	printf("ABS(x) = %d\n", ABS(num));
		
	printf("key two num: \n");
	scanf(" %f %f", &a, &b);
	
	printf("AVERAGE(x, y) = %f\n", AVERAGE(a, b));
	printf("PRODUCT(x, y) = %f\n", PRODUCT(a, b));
	printf("\n");


	printf("\n");
	system("pause");
	return 0;
}

