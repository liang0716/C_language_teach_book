//6-3
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int num;
	do
	{
		printf("key in a int num:\n");
		scanf("%d", &num);
		printf("num is %s.\n", (num % 2)? "odd": "even");

		printf("\nPlay again?(Y/N) ");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

