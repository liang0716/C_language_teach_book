//8-8 8-9
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/power.c"
#include "../function_list/chk_prime.c"

double f(double);

int main(void)
{

	//f(x) = 3x^3 + 2x -1

	printf("f(-3.2) = %f\n", f(-3.2));
	printf("f(-2.1) = %f\n", f(-2.1));
	printf("f(0) = %f\n", f(0));
	printf("f(2.1) = %f\n", f(2.1));
	
	printf("1 do chk_prime is %d\n", chk_prime(1));
	system("pause");
	return 0;
}

double f(double x)
{
	return 3 * pow_double(x, 3) + 2 * pow_double(x, 2) -1;
}

