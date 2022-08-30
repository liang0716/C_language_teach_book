//8-3 8-4 8-5
#include <stdio.h>
#include <stdlib.h>

int cub(int);
double square(double);
double mod(int, int);
int main(void)
{

	printf("cub(2) = %d\n",cub(2));
	printf("square(2) = %f\n",square(4.0));
	printf("mod(17, 5) = %f\n",mod(17, 5));
	
	printf("\n");
	system("pause");
	return 0;
}

int cub(int n)
{
	return n*n*n; 
}

double square(double n)
{
	return n*n; 
}
double mod(int a, int b)
{
	return (double)a/b; 
}
