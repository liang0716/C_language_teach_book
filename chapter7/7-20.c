//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	char q;
	
	int num;
	int cnt =0;
	do
	{
		printf("\nkey a word?\n");
		scanf(" %d", &num);
		if(num <= 50)
		{
			printf("\n");
			while(num--)
			{
				printf("*");
			}
			cnt++;
			printf("\n");
		}
		printf("\n");
	}
	while((num > 50) || (cnt < 3));

	printf("\n");
	system("pause");
	return 0;
}

