//7-23(a) (b)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i;
	int sum = 0;
	for(i = 0; sum <= 1000; i++)
	{
		sum += i;
	}
	printf("i= %d\n", i);
	
	
	i= sum = 0;
	while(sum <= 1000)
	{
		sum += (i++);
	}
	printf("i= %d\n", i);

	printf("\n");
	system("pause");
	return 0;
}

