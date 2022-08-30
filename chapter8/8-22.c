//8-22
#include <stdio.h>
#include <stdlib.h>

int rsum(int n);

int main(void)
{


	printf("sum = %d\n", rsum(4));
	printf("\n");
	system("pause");
	return 0;
}

int rsum(int n)
{
	int rslt = 0;
	if(n == 1)
	{
		rslt = 0;	
	}
	else
	{
		rslt = rsum(n - 1) + (n-1) * n;
	}
	return rslt;
}

