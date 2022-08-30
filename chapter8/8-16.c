//8-16
#include <stdio.h>
#include <stdlib.h>
int find_k(int);

int main(void)
{
	int k, n;

	
	char q;
	do
	{
		printf("key a num n = ");
		scanf("%d", &n);
		
		printf("\nfind_k(%d) = %d\n", n, find_k(n));
		
		
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	system("pause");
	return 0;
}

int find_k(int n)
{
	int k = 0, temp;
	while(1)
	{
		temp = 4 * k + 2 - n;
		k++;
		if((4 * k + 2) > n)
		{
			break;
		}
	}
	
	if((4 * k + 2 - n) > temp)
	{
		return k-1;
	}
	else
	{
		return k;
	}
	
}

