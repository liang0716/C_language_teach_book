//14-3 14-4
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *ptr = (double *)malloc(3 * sizeof(double));
	int i;
	double sum = 0.0;
	for(i = 0; i<3; i++)
	{
		printf("Please key in a double: \n");
		scanf("%lf", ptr + i);///////////////////注意這個%lf害我看半天 
		sum += *(ptr + i);
	}

	printf("Sum: %lf, averge: %lf\n", sum, sum/3);
	
	printf("\n");
	system("pause");
	return 0;
}
*/

//14-4
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i;
	double sum = 0.0;
	for(i = 0; i<3; i++)
	{
		printf("Please key in a double: \n");
		double *ptr = (double *)malloc(sizeof(double));
		scanf("%lf", ptr + i);///////////////////注意這個%lf害我看半天 
		sum += *(ptr + i);
	}

	printf("Sum: %lf, averge: %lf\n", sum, sum/3);
	
	printf("\n");
	system("pause");
	return 0;
}
