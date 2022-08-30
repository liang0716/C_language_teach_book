//
#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 4

void max(int a[][COL], int b[]);
int main(void)
{
	
	int arr[ROW][COL] = {{20,1,5,60},{99,23,0,14},{4,7,19,45}};
	int cmp[2];

	
	max(arr, cmp);
	printf("max = %d, min = %d\n", cmp[0], cmp[1]);
	printf("\n");
	system("pause");
	return 0;
}


void max(int a[][COL], int b[2])
{
	int i, j;
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("max = %d\n", *(*(a + i) + j));
		
			if((i == 0) && (j == 0))
			{
				*(b + 0)  = *(b + 1) = *(*(a + i)+ j);
			}
			
			if(*(*(a + i)+ j) > *(b + 0))
			{
				*(b + 0) = *(*(a + i)+ j);
			}
			if(*(*(a + i)+ j) < *(b + 1))
			{
				*(b + 1) = *(*(a + i)+ j);
			}
		}
		printf("\n");
	}

	
	//printf("max = %d, min = %d\n", *(b + 0), *(b + 1));
}
