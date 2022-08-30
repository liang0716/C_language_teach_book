//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int num;
	int sum = 0;
	do
	{
		printf("key in a num.\n");
		scanf(" %d", &num);
		printf("\n");
	}
	while(num <= 0);

	do
	{
		sum += num;
		num -= 2;
	}
	while(num > 0);
	
	printf("sum =%d\n", sum);
	system("pause");
	return 0;
}

