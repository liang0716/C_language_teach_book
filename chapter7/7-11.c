//7-11
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int sum;
	for(i = 1; i <= 100; i++)
	{
		sum = 0;
		printf("\ni=%d\n", i);
		for(j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
				printf(" %d,", j);
				sum += j;
			}
		}
		
		if(sum == i)
		{
			printf("\nPerfect i=%d\n", i);	
		} 
	} 

	printf("\n");
	system("pause");
	return 0;
}

