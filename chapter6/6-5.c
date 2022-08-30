//6-5~6-6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int kg, cm; 
	do
	{
		printf("輸入身高 體重 以空白分隔\n");
		scanf("%d %d", &cm, &kg);
		
		if((cm < 180) && (kg > 90))
		{
			printf("體重過重\n");
		}
		else
		{
			printf("不會過重\n");
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

