//10-14 10-15 10-16 10-17
#include <stdio.h>
#include <stdlib.h>


void max(int *ptr);
int main(void)
{
	int i;
	int arr[5] = {34,76,33,42,76};
	//10-14
	for(i = 0; i < 5; i++)
	{
		*(arr + i) += 10;
		printf("%d\n", arr[i]);
	}
	
	//10-15
	int *ptr;
	ptr = &arr[0];
	for(i = 0; i < 5; i++)
	{
		*(ptr + i) += 10;
		printf("%d\n", *(ptr+i));
	}
	

	max(ptr);
	
	printf("\n");
	system("pause");
	return 0;
}

void max(int *ptr)
{
	int i;
	int max, min, max_idx, min_idx;
	
	for(i = 0; i < 5; i++)
	{
		if(i == 0)
		{
			max = min = (*ptr);
			max_idx = min_idx = i;
		}
		
		if(*(ptr + i) > max)
		{
			max = *(ptr + i);
			max_idx =i;
		}
		if(*(ptr + i) < min)
		{
			min = *(ptr + i);
			min_idx =i;
		}
		
		
	}
	printf("max_idx = %d, min_idx = %d\n", max_idx, min_idx);
}
