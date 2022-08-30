//11-12 11-13 
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
	struct data student[num], *ptr;
	
	for(i = 0; i < num; i++)
	{
		printf("Key a name: ");
		gets(student[i].name);
		printf("Key a score: ");
		scanf("%d", &student[i].math);
		fflush(stdin);
	}
	ptr = student;
	
	max = (ptr + 0)->math;
	max_idx = 0;
	
	
	printf("Student fail list:\n");
	for(i = 0; i < num; i++)
	{
		if((ptr + i)->math > max)
		{
			max = (ptr + i)->math;
			max_idx = i;
		}
	
		sum += (ptr + i)->math;
		//printf("%d. %s: %d\n", i, student[i].name, student[i].math);
		
		
		if((ptr+i)->math < 60)
		{
			printf("%d. %s: %d\n", i, (ptr + i)->name, (ptr + i)->math);	
		} 
	}



	
	printf("\naverge = %f\n", (double)sum/num);
	printf("max = %s , score = %d\n", (ptr + max_idx)->name, (ptr + max_idx)->math);
	
	
	
	printf("\n");
	system("pause");
	return 0;
}
