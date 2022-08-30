//7-10
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int i, n;
	float sum = 0;
	do
	{
		printf("key in n.\n");
		scanf("%d", &n);
		
		for(i = 1; i <= n; i++)
		{
			sum += (float)1/(i+1);
		}
		printf("sum = %f\n", sum);

		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

