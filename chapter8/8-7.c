//8-7.c
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/chk_prime.c"
int main(void)
{

	int i = 1, cnt = 0;
	while(1)
	{
		if(chk_prime(i))
		{
			cnt++;
		}
		if(cnt == 100)
		{
			printf("%d\n", i);
			break;
		}
		i++;
	}

	printf("\n");
	system("pause");
	return 0;
}

