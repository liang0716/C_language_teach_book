//6-10
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y;
	char q;
	do
	{
		printf("key in x, y:\n");
		scanf("%f, %f", &x, &y);
		

		if((x == 0) && (y != 0))
		{
			printf("\nx�b�W\n");
		}
		else if((x != 0) && (y == 0))
		{
			printf("\ny�b�W\n");
		}
		else if((x > 0) && (y > 0))
		{
			printf("\n�Ĥ@�H��\n");
		}
		else if((x > 0) && (y < 0))
		{
			printf("\n�ĥ|�H��\n");
		}
		else if((x < 0) && (y > 0))
		{
			printf("\n�ĤG�H��\n");
		}
		else if((x < 0) && (y < 0))
		{
			printf("\n�ĤT�H��\n");
		}
		else
		{
			printf("\n���I\n");
		}

		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

