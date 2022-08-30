//
#include <stdio.h>
#include <stdlib.h>

#define MAX 3
#define LEN 10 

void string_cpy(char arr1[MAX][LEN], char arr2[MAX][LEN]);

int main(void)
{

	
	char arr1[MAX][LEN] = {"Tom", "Lily", "James", "Lee"};
	char arr2[MAX][LEN];
	
	int i,j;
	/*
	for(i = 0; i<MAX; i++)
	{
		for(j = 0; j<LEN; j++)
		{
			printf("%c", arr1[i][j]);
			if(arr1[i][j] == '\0')
				break;
			else
				arr2[i][j] = arr1[i][j];
		}
		arr2[i][j] ='\0';
		printf("\n");
	}
	
	for(i = 0; i < MAX; i++)
	{
		printf("arr2[%d]=%s\n", i, arr2[i]);
	}
	*/
	string_cpy(arr1, arr2);
	
	printf("\n");
	system("pause");
	return 0;
}

void string_cpy(char arr1[MAX][LEN], char arr2[MAX][LEN])
{
		
	int i,j;
	
	for(i = 0; i<MAX; i++)
	{
		for(j = 0; j<LEN; j++)
		{
			//printf("%c", arr1[i][j]);
			//if(arr1[i][j] == '\0')
			//	break;
			//else
				arr2[i][j] = arr1[i][j];
		}
		//arr2[i][j] ='\0';
		//printf("\n");
	}
	
	for(i = 0; i < MAX; i++)
	{
		printf("arr2[%d]=%s\n", i, arr2[i]);
	}
}

