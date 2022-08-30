//¬Y¾ðªºn¦¸¤è
/* 
#include <stdio.h>
#include <stdlib.h>
int pow_int(int, int);
float pow_float(float, int);
double pow_double(double, int);

int main(void)
{

	char q;
	int i;
	float f;
	double d;
	
	do
	{

		i = pow_int( 11, 0);
		f = pow_float( 1.01, 2);
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}
*/ 

int pow_int(int num, int power)
{
	int i;
	int rslt = 1;

	for(i = 0; i < power; i++)
	{
		rslt *= num;
	}
	//printf("%d\n", rslt);
	return rslt;
}


float pow_float(float num, int power)
{
	int i;
	float rslt = 1;

	for(i = 0; i < power; i++)
	{
		rslt *= num;
	}
	//printf("%f\n", rslt);
	return rslt;
}


double pow_double(double num, int power)
{
	int i;
	double rslt = 1.0;

	for(i = 0; i < power; i++)
	{
		rslt *= num;
	}
	//printf("%f\n", rslt);
	return rslt;
}
