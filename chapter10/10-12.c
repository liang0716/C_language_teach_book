//10-12.c
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

#define INDEX 3
void square(int *);

int main(void)
{
	int i;
	int a[3] = {5, 4, 3};
	
	
	for(i = 0; i < INDEX; i++)
	{
		printf("a = %d\n", *(a + i));
	}
	
	square(a);

	
	for(i = 0; i < INDEX; i++)
	{
		printf("a = %d\n", *(a + i));
	}
	

	printf("\n");
	system("pause");
	return 0;
}

void square(int *arr)
{
	int i;
	for(i = 0; i < INDEX; i++)
	{
		printf("a2 = %d\n", *(arr + i) = pow_int(*(arr + i), 2));
	}

} 
