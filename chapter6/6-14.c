//6-14
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cmp, year;
	char q;
	do
	{
		printf("key in year num\n");
		scanf("%d", &year);
		
		if(year % 4 == 0)
		{
			cmp = 1;
			if(year % 100 == 0)
			{
				cmp = 0;
				if(year % 400 == 0)
				{
					cmp = 1;
					if(year % 4000 == 0)
					{
						cmp = 0;
					}
				}
			}

		}
		else
		{
			cmp = 0;
		}
		
		printf("%s閨年\n", (cmp)?"是" :"不是");
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

