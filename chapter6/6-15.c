//4-15 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int need, input;
	int c_500, c_100, c_50, c_10, c_5, c_1;
	char q;
	
	
	do
	{
		printf("惠蹿肂: ");
		scanf("%d", &need);
		printf("\n");
		
		printf("龟肂: ");
		scanf("%d", &input);
		printf("\n");
		//output = input- need;
		printf("т箂肂: %d\n", input - need);

		printf("\n");
		
		
		if((input -= need) > 0)
		{
			printf("т箂500じ眎计: %d", input / 500);
			input %= 500;

			printf(" ,100じ眎计: %d", input / 100);
			input %= 100;
			
			printf(" ,50じ计: %d", input / 50);
			input %= 50;
			
			printf(" ,10じ计: %d", input / 10);
			input %= 10;
			
			printf(" ,5じ计: %d", input / 5);
			input %= 5;
			
			printf(" ,1じ计: %d\n", input);

		}
		else if(input == need)
		{
			printf("蹿肂ぃ斗т箂\n");
		}
		else
		{
			printf("蹿肂ぃì\n");
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

