//7-9
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/power.c"


int main(void)
{
	int i,sum;
	sum = 0;
	
	for(i = 1; i <= 50; i++)
	{
		if(i % 2)
		{
			sum += (-1) * pow_int(i, 2);
		}
		else
		{
			sum += pow_int(i, 2);
		}
		
	}
	printf("sum = %d\n", sum);
	
	printf("\n");
	system("pause");
	return 0;
}



