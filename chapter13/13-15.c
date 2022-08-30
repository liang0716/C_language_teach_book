//13-15
#include <stdio.h>
#include <stdlib.h>

#define STR "Dirty Kitty cat.\n"

int main(int argc, char *argv[])
{
	int i = ((int)*(argv[1]+0)) - 48;
	printf("%d\n", *(argv[1]+0));
	if(argc == 2)
	{
		while(i > 0)
		{
			printf("%s", STR);
			i--;
		}
	}
	else
	{
		printf("Wrong cmd.\n");
	}


	printf("\n");
	system("pause");
	return 0;
}

