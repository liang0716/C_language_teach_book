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
			printf("�~�ȭ�%d����%d�u�~�Z:", i, j, sale[i][j]);
			scanf("%d", &sale[i][j]);
		}
	}
	
	printf("****output****");
	
	for(i = 0; i < 2; i++)
	{
		printf("\n�~�ȭ�%d���~�Z���O��", i+1);
		for(j=0; j<4; j++)
		{
			printf("%d ", sale[i][j]);
			sum+=sale[i][j];
		}
	}
	printf("\n2004�~�`�P��q��%d����\n",sum);
	
	
	
	

	
	for(j=0; j<4; j++)
	{
		printf("\n���~�ȭ��ۥ[����%d���~�Z���O��:%d\n",j , sale[0][j]+sale[1][j]);
	}

	int sum_2[2]={0}; 
	for(i = 0; i<2; i++)
	{
		for(j= 0; j<4; j++)
		{
			sum_2[i] += sale[i][j];
		}
		printf("�~�ȭ�%d���~�~�Z:%d\n", i, sum_2[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}

