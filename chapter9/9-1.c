//9-1 9-2 9-3 9-4
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, arr[5];
	
	for(i =0; i < 5; i++)
	{
		arr[i] = i+1;
	}
	
	for(i =0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	arr[0] = 2;
	arr[1] = 3;
	arr[2] = 1;
	arr[3] = 7;
	arr[4] = 9;
	
 	for(i =0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("sizeof(arr)=%d\n",sizeof(arr));
	
	int a[3];
	
	for(i = 0; i < 3; i++)
	{
		printf("key a num for a[%d]:", i);
		scanf("%d", &a[i]);
		printf("\n");
	}
	
	for(i =0; i < 3; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	

	printf("\n");
	system("pause");
	return 0;
}

