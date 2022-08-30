//
#include <stdio.h>
#include <stdlib.h>

#define MAX 3
#define LEN 10 


int main(void)
{

	
	char arr1[MAX][Len] = {"Tom", "Lily", "James", "Lee"};
	char arr2[MAX][Len];
	
	int i,j;
	
	for(i = 0; i<MAX; i++)
	{
		for(j = 0; j<LEN; j++)
		{
			if(arr1[i][j] == '\0')
				break;
			else
				arr2[i][j] = arr1[i][j];
		}
	}
	
	for(i = 0; i < MAX; i++)
	{
		printf("arr2[%d]=%s\n", i, arr2[i][j]);
	}
	
	printf("\n");
	system("pause");
	return 0;
}

