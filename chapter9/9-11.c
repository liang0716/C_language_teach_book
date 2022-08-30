//9-11 9-12
#include <stdio.h>
#include <stdlib.h>



void search(int c[][3]);

int main(void)
{

	int i,j;
	int a[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
	int b[4][3] = {{12, 11, 10},{9, 8, 7},{6, 5, 4},{3, 2, 1}};

	
	for(i= 0; i < 4; i++)
	{
		for(j= 0; j < 3; j++)
		{
			printf("  %d", a[i][j]+b[i][j]);
		} 
		printf("\n");
	}
	
	search(a);
	
	printf("\n");
	system("pause");
	return 0;
}

void search(int c[][3])
{
	int i, j;
	
	int max = c[0][0], min = c[0][0];
	int max_idx[2] = {0, 0}, min_idx[2] = {0, 0};
	
	for(i= 0; i < 4; i++)
	{
		for(j= 0; j < 3; j++)
		{
			
			if(c[i][j] > max)
			{
				max = c[i][j];
				max_idx[0] = i;
				max_idx[1] = j;
			}
			
			if(c[i][j] < min)
			{
				min = c[i][j];
				min_idx[0] = i;
				min_idx[1] = j;
			}
			
		} 
	}
	
	printf(" max_idx = {%d, %d}\n", max_idx[0], max_idx[1]);
	printf(" min_idx = {%d, %d}\n", min_idx[0], min_idx[1]);
}
