//7-13
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int sum;
	int num;
	do
	{
		printf("key a num:");
		scanf("%d", &num);
		while(num <= 0)
		{
			printf("\nPlease rekey a num:");
			scanf("%d", &num);
		}
		sum = 0;
		
		while(num > 0)
		{
			sum += num;
			num -=2 ;
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

