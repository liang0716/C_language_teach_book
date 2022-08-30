//15-18 
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

void show_dec(char *arr, int n);
int main(void)
{
	char *ptr = {"1011"}; 
	show_dec(ptr, 4);

	printf("\n");
	system("pause");
	return 0;
}

void show_dec(char *arr, int n)
{
	int i = 0, sum = 0;
	while(i < n)
	{
		printf("c = %c\n", *(arr + i));
		sum += (*(arr + i ) - 48) * pow_int(2, 4 - 1 - i);
		printf("%d\n", (*(arr + i ) - 48) * pow_int(2, 4 - 1 - i));
		i++;
	}
	printf("sum=%d\n", sum);
}

