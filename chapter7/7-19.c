//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int n = 0, sum = 0;
	
	do
	{
		sum += n; 
		n++;
	}
	while(sum <= 1000);
	

	printf("n= %d\n", n);
	system("pause");
	return 0;
}

