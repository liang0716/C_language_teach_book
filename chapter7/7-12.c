//7-12
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/power.c"
#define MAX 1000
int main(void)
{

	int i, j, sum;
	
	for(i = 1; i < MAX; i++)
	{
		printf("i = %d", i);
		j = i;
		sum = 0;
		while(j)
		{
			sum += pow_int(j % 10, 3);
			j /= 10;
		}
		
		if(i==sum)
		{
			printf(" Armstrong");
		}
		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}

