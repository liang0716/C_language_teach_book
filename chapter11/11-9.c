//11-9 11-10 11-11
#include <stdio.h>
#include <stdlib.h>

#define num 5

struct data
{
	char name[10];
	int math;
};



int main(void)
{
	int i, sum = 0, max, max_idx;
	struct data student[num];
	for(i = 0; i < num; i++)
	{
		printf("Key a name: ");
		gets(student[i].name);
		printf("Key a score: ");
		scanf("%d", &student[i].math);
		fflush(stdin);
	}
	
	
	max = student[0].math;
	max_idx = 0;
	
	
	printf("Student fail list:\n");
	for(i = 0; i < num; i++)
	{
		if(student[i].math > max)
		{
			max = student[i].math;
			max_idx = i;
		}
	
		sum += student[i].math;
		//printf("%d. %s: %d\n", i, student[i].name, student[i].math);
		
		
		if(student[i].math < 60)
		{
			printf("%d. %s: %d\n", i, student[i].name, student[i].math);	
		} 
	}



	
	printf("\naverge = %f\n", (double)sum/num);
	printf("max = %s , score = %d\n", student[max_idx].name, student[max_idx].math);
	
	
	
	printf("\n");
	system("pause");
	return 0;
}


