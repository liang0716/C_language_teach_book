//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j, min_idx[2], max_idx[2]; //[2]:[0]時段 [1]星期 
	float max, min;
	float sum[4]={0};//給4 讓3或4都夠用 
	
	
	//int float[5] = {12, 16, 10, 14, 15};
	float temp[3][4] = {{18.2, 17.3, 15, 13.4}, {23.8, 25.1, 20.6, 17.8}, {20.6, 21.5, 18.4, 15.7}};
	
	//(a) (c) (d) (e)
	
	max = temp[0][0];
	max_idx[0] = 0;
	max_idx[1] = 0;
	
	min = temp[0][0];
	min_idx[0] = 0;
	min_idx[1] = 0;
	for(i= 0; i < 3; i++)
	{
		for(j= 0; j < 4; j++)
		{
			sum[i] +=  temp[i][j];
			printf("%4.2f  ", temp[i][j]);
			
			
		if(temp[i][j] > max)
		{
			max = temp[i][j];
			max_idx[0] = i;
			max_idx[1] = j;
		}
		if(temp[i][j] < min)
		{
			min = temp[i][j];
			min_idx[0] = i;
			min_idx[1] = j;
		}
			
		}
		printf("\n時段%d的均溫 = %4.2f\n\n", i+1 , sum[i]/4);
	}
	printf("\nMax temp, 星期%d, 時段%d\n", max_idx[1]+1, max_idx[0]+1);
	printf("Min temp, 星期%d, 時段%d\n\n", min_idx[1]+1, min_idx[0]+1);
	//(b)
	for(j= 0; j < 4; j++)
	{
		for(i= 0; i < 3; i++)
		{
			sum[j] += temp[i][j];
		}
		printf("星期%d的均溫 = %4.2f\n", j+1 , sum[j]/3);

		printf("\n");
	}
	
	
	printf("\n\n");

	printf("\n");
	system("pause");
	return 0;
}

