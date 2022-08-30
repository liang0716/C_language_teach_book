//10-11.c
#include <stdio.h>
#include <stdlib.h>

void add10(int *, int *);

int main(void)
{
	int a = 5, b =23;
	
	add10( &a, &b);
	printf("a= %d, b= %d\n", a, b);
	
	add10( &a, &b);
	printf("a= %d, b= %d\n", a, b);

	printf("\n");
	system("pause");
	return 0;
}

void add10(int *a, int *b)
{
	(*a) += 10;
	(*b) += 10;

} 
