//8-10
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

int mersenne(int);
int main(void)
{

	int i = 0, cnt = 0;
	
	while(cnt < 8)
	{
		
		i++;
		if(chk_prime(i))
		{
			if(mersenne(i))
			{
				printf("%d\n", i);
				cnt++;
			}
		}
		if(cnt == 5)
		{
			break;
		}
	}

	printf("\n");
	system("pause");
	return 0;
}

int mersenne(int a)
{
	a += 1;
	int i = 1;
	int temp;
	
	do
	{
		temp = pow_int(2, i);
		i++;
	}
	while(temp < a);
	
	if(temp == a)
	{
		return 1;
	}
	return 0;
}

