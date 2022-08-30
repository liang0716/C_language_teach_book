//13-5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

double area(double r);
double peri(double r);

int main(void)
{


	printf("area(2.0) = %6.3f\n", area(2.0));
	printf("peri(2.0) = %6.3f\n", peri(2.0));
	
	printf("\n");
	system("pause");
	return 0;
}

double area(double r)
{
	return PI * r * r;
}

double peri(double r)
{
	return 2 * r * PI; 
}

