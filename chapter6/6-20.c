//6-19
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int a;
	do
	{

		printf("key in 1~4: ");
		scanf("%d", &a);
		
		switch(a)
		{
			case 1:
				printf("Spring\n");
				break;
			case 2:
				printf("Summer\n");
				break;
			case 3:
				printf("Fall\n");
				break;
			case 4:
				printf("Winter\n");
				break;
			default:
				printf("Error\n");
				break;
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

