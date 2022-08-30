//8-15
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

double my_fun(double x, int n);

int main(void)
{
	printf("my_fun(2.2, 3): %f\n", my_fun(2.2, 3));
	printf("my_fun(2.2, 5): %f\n", my_fun(2.2, 5));

	
	int i = 1;
	while(1)
	{
		i++;
		if(my_fun(2.2, i) - my_fun(2.2, i-1) < 0.00001)
		{
			printf("i: %d\n", i);
			break;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

double my_fun(double x, int n)
{
	double sum = 0;
	while(n)
	{
		sum += (double)pow_int(-1, n) * pow_double(x, 2 * n + 1) / fac(2 * n + 1);
		n--;
	}
	return sum;
} 
