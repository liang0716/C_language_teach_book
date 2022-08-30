//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int cnt = 0;
	int num;
	
	while(cnt < 3)
	{
		printf("\nkey in a num\n");
		scanf("%d", &num);
		printf("\n");
		if(num <= 50)
		{
			while(num--)
			{
				printf("*");
			} 
			cnt++;
		}
	}

	printf("\n");
	system("pause");
	return 0;
}

