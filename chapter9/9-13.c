//9-13 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, max, max_idx, sum[5]={0};//��5 ��3��5������ 
	
	
	int pr[5] = {12, 16, 10, 14, 15};
	int th[3][5] = {{33, 32, 56, 45, 33}, {77, 33, 68, 45, 23}, {43, 55, 43, 67, 65}};
	
	//(a)(c)
	for(i= 0; i < 3; i++)
	{
		for(j= 0; j < 5; j++)
		{
			sum[i] += th[i][j] * pr[j];
			//printf("th = %d, pr = %d\n", th[i][j], pr[j]);
		}
		printf("�P���%d��sum = %d\n", i+1 , sum[i]);
		
		max = sum[i];
		max_idx = i;
		if(sum[i] > max)
		{
			max =sum[i];
			max_idx = i;
		}
	}
	printf("�P���%d��~�B�̰�\n", max_idx+1);
	printf("\n\n");
	
	
	//(b)
	for(j = 0; j < 5; j++)
	{
		sum[j] = 0;
	}
	
	for(j= 0; j < 5; j++)
	{
		for(i= 0; i < 3; i++)
		{
			sum[j] += th[i][j] * pr[j];
			//printf("th = %d, pr = %d\n", th[i][j], pr[j]);
		}
		printf("���~%c��sum = %d\n", j + 65, sum[j]);
		if(j== 0)
		{
			max = sum[j];
			max_idx = j;
		}
		else if(sum[j] > max)
		{
			max = sum[j];
			max_idx = j;
		}
		printf("\n");
	}
	printf("���~%c��~�B�̰�\n", max_idx + 65);





	printf("\n");
	system("pause");
	return 0;
}

