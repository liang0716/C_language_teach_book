//14-1 
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

int main(void)
{
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 12;
	
	printf("(*ptr) = %d, pow_int((*ptr), 2) = %d\n", (*ptr), pow_int((*ptr), 2));
	free(ptr);
	printf("\n");
	system("pause");
	return 0;
}

