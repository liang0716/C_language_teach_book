//6-9 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score[5], i, A_count = 0, B_count = 0, C_count = 0;
	char q;
	
	do
	{
		printf("依序輸入5個分數(0~100)\n");
		for(i = 0; i < 5; i++)
		{
			printf("輸入%d個分數(0~100)\n", i+1);
			scanf("%d", &score[i]);
			if((score[i] >= 76) && (score[i] <= 100))
			{
				A_count++;
			}
			else if((score[i] >= 60) && (score[i] <= 75))
			{
				B_count++;
			}
			else
			{
				C_count++;
			}
		}
		printf("A: %d, B: %d, C: %d\n", A_count, B_count, C_count);

		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

