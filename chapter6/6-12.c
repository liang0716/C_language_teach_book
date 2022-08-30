//6-12 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int score;
	do
	{
		printf("key in score(0~100):\n");
		scanf("%d", &score);
		
		if(score > 79 && score <= 100)
		{
			printf("A\n");
		}
		else if(score > 59 && score <= 79)
		{
			printf("B\n");
		}
		else if( score < 60)
		{
			printf("C\n");
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

