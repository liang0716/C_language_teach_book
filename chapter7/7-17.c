//7-17
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/power.c"

int main(void)
{

	int i, sum = 0;
	
	while(i <= 10)
	{
		printf("i:%d, ендш:%d\n", i, pow_int(i, 2));
		sum += pow_int(i, 2);
		i++;
	}
	printf("sum = %d\n", sum);
	printf("\n");
	system("pause");
	return 0;
}

