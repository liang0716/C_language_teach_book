//6-1 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch, q;
	
	do
	{
		printf("Key in a char.\n");
		scanf(" %c", &ch);
		printf("ch=%d\n",ch);
		if((ch >= 48) && (ch < 57))
		{
			printf("this is a num!\n");
		}
		else
		{
			printf("this is a char!\n");
		}
		printf("Play again?(Y/N)\n");
		scanf(" %c", &q);
	}
	while((q == 'Y') || (q == 'y'));


	printf("\n");
	system("pause");
	return 0;
}

