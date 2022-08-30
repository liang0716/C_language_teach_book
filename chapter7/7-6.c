//7-6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int i, num;
	do
	{
		printf("key in a num. \n");
		scanf("%d", &num);
		
		for(i = 1; i <= num; i++)
		{
			if(num % i == 0)
			{
				printf(" %d", i);
				
			}
		}
		
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

