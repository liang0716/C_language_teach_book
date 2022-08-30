//15-5.c
#include <stdio.h>
#include <stdlib.h>


void my_binshow(int);

int main(void)
{

	my_binshow(640);

	printf("\n");
	system("pause");
	return 0;
}

void my_binshow(int num)
{
	int i = 0, a[10] = {0};
	while(num)
	{
		a[i] = num % 2;
		num /= 2;
		i++; 
	}

	for(i = 9; i >= 0; i--)
	{
		printf("%d", *(a+i));
	}
	printf("\n");
}
