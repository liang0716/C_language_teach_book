//8-13
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"


double my_fun(int n);
int main(void)
{


	printf("my_fun(5): %f\n", my_fun(5));
	printf("my_fun(8): %f\n", my_fun(8));
	printf("my_fun(10): %f\n", my_fun(10));
	int i = 1;
	while(1)
	{
		i++;
		if(my_fun(i) - my_fun(i-1) < 0.00001)
		{
			printf("i: %d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}

double my_fun(int n)
{
	double sum = 0;
	while(n)
	{
		sum += (double)1 / fac(n);
		n--;
	}
	return sum;
}

