//9-15
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j, k;
	int sum =0;
	int th[2][3][4] = 
					{
						{
							{0, 1, 2, 3}, 
							{4, 5, 6, 7}, 
							{8, 9, 10, 11}
						},
						
						{
							{12, 13, 14, 15},
							{16, 17, 18, 19},
							{20, 21, 22, 23}
						},
					};
	
	//(a)(c)
	
	for(i= 0; i < 2; i++)
	{
		for(j= 0; j < 3; j++)
		{
			for(k= 0; k < 4; k++)
			{
				printf("%2d ", th[i][j][k]);
				sum += th[i][j][k];
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("sum = %d", sum);
	printf("\n\n");

	
	system("pause");
	return 0;
}

