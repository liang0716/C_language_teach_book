//7-25 26 27
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j;
	for(i= 1; i < 6; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	
	
	
	for(i= 1; i < 6; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	int k;
	for(i = 1; i < 6; i++)
	{
		k = 1;
		for(j = 1; j <= 5; j++)
		{
			if(j < (6 - i))
			{
				printf(" ");
			}
			else
			{
				printf("%d", k++);
			}
			
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	return 0;
}

