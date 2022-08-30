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
			printf("\nx軸上\n");
		}
		else if((x != 0) && (y == 0))
		{
			printf("\ny軸上\n");
		}
		else if((x > 0) && (y > 0))
		{
			printf("\n第一象限\n");
		}
		else if((x > 0) && (y < 0))
		{
			printf("\n第四象限\n");
		}
		else if((x < 0) && (y > 0))
		{
			printf("\n第二象限\n");
		}
		else if((x < 0) && (y < 0))
		{
			printf("\n第三象限\n");
		}
		else
		{
			printf("\n原點\n");
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

