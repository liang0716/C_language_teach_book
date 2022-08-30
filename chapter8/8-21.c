//8-21
#include <stdio.h>
#include <stdlib.h>

int sum2(int n);

int main(void)
{


	printf("sum = %d\n", sum2(10));
	printf("\n");
	system("pause");
	return 0;
}

int sum2(int n)
{
	int rslt = 0;
	if(n == 1)
	{
		rslt =  2;	
	}
	else
	{
		rslt = sum2(n - 1) + 2 * n;
	}
	return rslt;
}

