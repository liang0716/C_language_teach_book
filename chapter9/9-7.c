//9-7 9-8
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	double dd[5];
	double sum;
	
	double max, min;
	int max_idx, min_idx;
	
	
	for(i = 0; i < 5; i++)
	{
		printf("key in a double num: ");
		scanf("%lf", &dd[i]);
	}
	
	
	sum = 0;

	for(i = 0; i < 5; i++)
	{	printf("\n%d: %f\n", i, dd[i]);
		sum += dd[i];
	}
	
	printf("\nsum: %f\n", sum);
	printf("avger = %f\n", sum/5);
	
	max = min = dd[0];
	
	for(i = 0; i < 5; i++)
	{
		if(dd[i]> max)
		{
			max = dd[i];
			max_idx = i;
		}
		
		if(dd[i] < min)
		{
			min = dd[i];
			min_idx = i;
		}		
	}
	printf("max_idx: %d, min_idx: %d\n", max_idx, min_idx);

	printf("\n");
	system("pause");
	return 0;
}

