//13-16
#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
	FILE *fptr;
	char ch;
	if(argc == 2)
	{
		fptr = fopen(argv[1], "r");
		while((ch = getc(fptr)) != EOF)
		{
			//putchar(ch);
			printf("%c", ch);
		}
		fclose(fptr);
	}
	else
	{
		puts("Wrong CMD.");
	}

	printf("\n");
	system("pause");
	return 0;
}

