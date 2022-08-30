//8-12
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

double my_fun(int);

int main(void)
{

	int i = 1;
	printf("my_fun(5): %f\n", my_fun(5));
	printf("my_fun(6): %f\n", my_fun(6));
	printf("my_fun(7): %f\n", my_fun(7));
	printf("my_fun(100): %f\n", my_fun(100));
	while(my_fun(i) <= 0.99999)
	{
		i++;
	}
	printf("my_fun(%d) > 0.99999\n", i);
	
	printf("\n");
	system("pause");
	return 0;
}


double my_fun(int n)
{
	int i;
	double sum = 0;
	for(i = 1; i <= n; i++)
	{
		//printf(" %d : %f,\n", i, pow_double(2.0, i));
		sum += 1/pow_double(2, i);
		
	}
	return sum;
}
