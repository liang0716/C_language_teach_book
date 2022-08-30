//8-1 8-2
#include <stdio.h>
#include <stdlib.h>

void kitty(int k);
int main(void)
{
	
	kitty(9);
	
	printf("\n");
	system("pause");
	return 0;
}

void kitty(int k)
{
	while(k--)
	{
		printf("Hello Kitty\n");
	}
}
