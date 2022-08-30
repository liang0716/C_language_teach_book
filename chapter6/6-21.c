//6-21 ~ 6-22
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	char ch;
	do
	{
		printf("key in a char\n");
		ch = getche();
		
		switch(ch)
		{
			case 'A':
			case ((int) 'A') + 32:
				printf("@A\n");
				break;
				
			case 'B':
			case ((int) 'B') + 32:
				printf("@B\n");
				break;
			default:
				printf("none\n");
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

