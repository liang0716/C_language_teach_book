//7-5
#include <stdio.h>
#include <stdlib.h>

int main(void)
{


	int i;
	int sum = 0;


	for(i = 0; i <= 100; i++)
	{
		if((i % 3 == 0) && (i % 8 == 0))
		{
			sum += i;
		}

	}
	printf("sum = %d\n", sum);


	printf("\n");
	system("pause");
	return 0;
}

