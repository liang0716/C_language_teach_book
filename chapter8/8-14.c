//8-14
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

double my_fun(double x, int n);

int main(void)
{

	printf("my_fun(0.1, 5): %f\n", my_fun(0.1, 5));
	printf("my_fun(0.1, 8): %f\n", my_fun(0.1, 8));
	printf("my_fun(0.2, 8): %f\n", my_fun(0.2, 8));
	
		int i = 1;
	while(1)
	{
		i++;
		if(my_fun(0.1, i) - my_fun(0.1, i-1) < 0.00001)
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
		sum += (double)pow_double(x, n) / fac(n);
		n--;
	}
	return sum;
} 
