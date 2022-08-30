//14-5 14-6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *num, *i;
	int k;
	double sum = 0;
	struct student
	{
		char name[10];
		int score;
	};
	
	struct student *ptr;
	
	num = (int *)malloc(sizeof(int));
	i = (int *)malloc(sizeof(int));
	
	printf("Number of student: ");
	scanf("%d", num);
	
	
	ptr = (struct student*)malloc((*num) * sizeof(struct student));
	
	for((*i) = 0; (*i) < (*num); (*i)++)
	{
		fflush(stdin);
		printf("name of student(%d): ", (*i));
		gets((ptr + (*i))->name);
		printf("score of student(%d): ", (*i));
		scanf("%d", &(ptr+(*i))->score);
		
		sum +=  (ptr+(*i))->score;
	}
	
	for((*i) = 0; (*i) < (*num); (*i)++)
	{
		printf(" %d: %s\'s score is %d\n", (*i), (ptr + (*i))->name, (ptr + (*i))->score);
	}
	printf("Averge: %6.3f\n",sum/3);
	free(i);
	free(num);
	free(ptr);
	
	printf("\n");
	system("pause");
	return 0;
}

