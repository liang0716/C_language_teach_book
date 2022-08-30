//15-17
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

int bin2ten(char *);

int main(void)
{
	char *ptr = {"1011011"};
	printf("%d\n", bin2ten(ptr));

	printf("\n");
	system("pause");
	return 0;
}

int bin2ten(char *ptr)
{
	int i = 0, num, sum = 0;
	
	while(*(ptr + i) != '\0')
	{
		i++;
	}
	num = i;
	i = 0;
	printf("%d\n", num);//看有多長 
	while(*(ptr + i) != '\0')
	{
		sum += (*(ptr + i)-48) * pow_int(2, num - 1 - i);
		i++;
	}
	return sum;
}
