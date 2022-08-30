//7-29 7-30
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int  input;
	int cnt = 0;
	int passwd = 6128;
	while(1)
	{
		printf("Key in the 4 password.\n");
		scanf("%d", &input);
		if(input != passwd)
		{
			printf("Wrong password.\n");
			if(cnt == 3)
			{
				printf("Try over three times. Bye...\n");
				break;
			}
			cnt++;
		}
		else
		{
			printf("Right Password. Welcome to the hell!\n");
			break;
		}
		
	}
	
	for(cnt = 0; cnt < 3; cnt++)
	{
		printf("Key in the 4 password.\n");
		scanf("%d", &input);
		if(input != passwd)
		{
			printf("Wrong password.\n");
			if(cnt == 2)
			{
				printf("Try over three times. Bye...\n");
				break;
			}

		}
		else
		{
			printf("Right Password. Welcome to the hell!\n");
			break;
		}
	}

	printf("\n");
	system("pause");
	return 0;
}

