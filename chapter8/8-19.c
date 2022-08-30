//8-19
#include <stdio.h>
#include <stdlib.h>

double rpower(double b, int n);

int main(void)
{


	printf("rpower(2.0, 3) = %f\n", rpower(2.0, 3));
	printf("\n");
	system("pause");
	return 0;
}


double rpower(double b, int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return b * rpower(b, n-1);
	}
}
