//10-23
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	int a[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
	int b[4][3] = {{12, 11, 10},{9, 8, 7},{6, 5, 4},{3, 2, 1}};
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf(" %2d" , (*(*(a + i) + j)) + (*(*(b + i) + j)));
		}
		printf("\n");
	}
	printf("Matrix A + B:\n");
	printf("\n");
	system("pause");
	return 0;
}

