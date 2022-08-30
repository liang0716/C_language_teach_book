//7-32
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/chk_prime.c"
int main(void)
{

	char q;
	int num;
	do
	{
		printf("key in a num: ");
		scanf("%d", &num);
		printf("%s", chk_prime(num)?"是質數\n": "非質數\n");

		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

