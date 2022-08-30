//7-7 7-8 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j;
	for(i =0 ; i < 100; i++)
	{
		if(i % 6 ==0)
		printf("Mode(6)%d\n", i);
	}
		printf("<<<<<<>>>>>>\n");
	for(i =0 ; i < 100; i++)
	{
		if((i % 7 == 0)&&(i % 3 == 0))
		printf("Mode(3&7)%d\n", i);
	}
	printf("\n");
	system("pause");
	return 0;
}

