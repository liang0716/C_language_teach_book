//8-23
#include <stdio.h>
#include <stdlib.h>

int fuct(int n);

int main(void)
{


	printf("fuct(5) = %d\n", fuct(5));
	printf("\n");
	system("pause");
	return 0;
}

int fuct(int n)
{
	int rslt = 0;
	if(n == 0)
	{
		rslt =  3;	
	}
	else
	{
		rslt = 2 * fuct(n - 1) - 5;
	}
	return rslt;
}



