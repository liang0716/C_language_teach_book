//任何進位顯示成2進位 最大只到1023 
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void show_binary(int num)
{
	int arr[SIZE] = {0};
	int i;
	
	while(num)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	
	for(i = SIZE; i > 0; i--)
	{	
		printf("%d", arr[i-1]);
	}
	printf("\n");
}

