//6-2
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int num;
	do
	{
		printf("Key in a int num.\n");
		scanf("%d", &num);
		
		if(num > 0)
		{
			printf("num > 0\n");
		}
		else if(num == 0)
		{
			printf("num = 0\n");
		}
		else
		{
			printf("num < 0\n");
		}
		
		
		printf("Play again?(Y/N)\n");
		scanf(" %c", &q);
	}
	while((q == 'Y') || (q == 'y'));
	
	printf("\n");
	system("pause");
	return 0;
}

