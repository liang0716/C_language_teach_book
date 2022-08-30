//7-3 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int i, n;
	int sum = 0;
	do
	{
		printf("key in a odd num:\n");
		scanf("%d", &n); 
		for(i = 0; i <= n; i++)
		{
			sum += ( i % 2)?i :0;
		}
		printf("sum = %d\n", sum);
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

