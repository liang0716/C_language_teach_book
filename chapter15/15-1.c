//15-1
#include <stdio.h>
#include <stdlib.h>

void four_add(int num);

int main(void)
{
	
	int i;
	for(i = 0; i < 16; i++)
	{
		printf("%02d: ", i);
		four_add(i);
		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}

void four_add(int num)
{
	int arr[8] = {0};
	int i = 0;
	
	while(num)
	{
		arr[i] = num%4;
		num /= 4;
		i++;
	}
	
	for(i = 8; i > 0; i--)
	{
		printf("%d", *(arr+i-1));
	}
}
