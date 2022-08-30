//9-9 9-10
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j, sale[2][4], sum = 0;
	for(i = 0; i<2; i++)
	{
		for(j= 0; j<4; j++)
		{
			printf("業務員%d的第%d季業績:", i, j, sale[i][j]);
			scanf("%d", &sale[i][j]);
		}
	}
	
	printf("****output****");
	
	for(i = 0; i < 2; i++)
	{
		printf("\n業務員%d的業績分別為", i+1);
		for(j=0; j<4; j++)
		{
			printf("%d ", sale[i][j]);
			sum+=sale[i][j];
		}
	}
	printf("\n2004年總銷售量為%d部車\n",sum);
	
	
	
	

	
	for(j=0; j<4; j++)
	{
		printf("\n兩位業務員相加的第%d的業績分別為:%d\n",j , sale[0][j]+sale[1][j]);
	}

	int sum_2[2]={0}; 
	for(i = 0; i<2; i++)
	{
		for(j= 0; j<4; j++)
		{
			sum_2[i] += sale[i][j];
		}
		printf("業務員%d的年業績:%d\n", i, sum_2[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}

