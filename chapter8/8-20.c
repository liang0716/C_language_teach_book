//8-20
#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main(void)
{

	printf("sum = %d\n", sum(10));
	printf("\n");
	system("pause");
	return 0;
}

int sum(int n)
{
	int rslt = 0;
	if(n == 1)
	{
		rslt =  1;	
	}
	else
	{
		rslt = n + sum(n-1);
	}
	return rslt;
}

