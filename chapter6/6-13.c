//6-13
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int mon;
	do
	{

		printf("key in month(1~12):\n");
		scanf("%d", &mon);
		
		if(mon > 2 && mon <= 5)
		{
			printf("Spring\n");
		}
		else if(mon > 5 && mon <= 8)
		{
			printf("Summer\n");
		}
		else if(mon > 9 && mon <= 11)
		{
			printf("Fall\n");
		}
		else if((mon > 11 && mon <= 12) || ((mon >= 1)&&(mon <= 2)))
		{
			printf("Winter\n");
		}
		else
		{
			printf("Error\n");
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

