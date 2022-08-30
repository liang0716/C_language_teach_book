//6-24
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, sum;
	sum = 0;
	i = 0;
	restart:
	
	
	if(i % 2)
	{
		sum += i; 
	}

	i++;
	
	if(i == 11)
	{
		goto out;
	}
	goto restart;

	out:
		printf("sum = %d", sum);
		
	printf("\n");
	system("pause");
	return 0;
}

