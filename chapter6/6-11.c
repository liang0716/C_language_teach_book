//6-11
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hours;
	float paid;
	char q;
	do
	{
		printf("key in hours: \n");
		scanf("%d", &hours);
		printf("\n");
		
		if(hours - 60 > 0)
		{
			paid = 60 * 75;
			hours -= 60;
			
			printf("hours:%d\n", hours);
			if(hours - 15 > 0)
			{
				hours -= 15;
				printf("hours:%d\n", hours);
				paid = paid + 15 * 75 * 1.25 + hours * 75 * 1.75;
			}
			else
			{
				paid = paid + hours * 75 * 1.25;
			}
		}
		else
		{
			paid = hours * 75;
		}

		

		
		printf("Money: %f/n", paid);
		
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

