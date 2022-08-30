//11-17
#include <stdio.h>
#include <stdlib.h>

#define num 5

struct data
{
	char name[10];
	int math;
};

double avg(struct data[]);
struct data find_best(struct data[]);
void fail(struct data[]);
void sort(struct data[]);

int main(void)
{
	int i, max;
	struct data student[num], best;
	for(i = 0; i < num; i++)
	{
		printf("Key a name: ");
		gets(student[i].name);
		printf("Key a score: ");
		scanf("%d", &student[i].math);
		fflush(stdin);
	}
	
	for(i = 0; i < num; i++)
	{
		printf("%d.%s:%d\n", i, student[i].name, student[i].math);
	}

	printf("\naverge = %f\n", avg(student));
	best = find_best(student);
	printf("best is %s: %d\n", best.name, best.math);
	
	fail(student);
	sort(student);
	
	printf("\n");
	system("pause");
	return 0;
}

double avg(struct data student[])
{
	int i, sum = 0;
	for(i = 0; i < num; i++)
	{
		sum += (student + i)->math;
		//printf("%d.%s:%d\n", i, (student+i)->name, (student+i)->math);
	}
	return (double) sum/num;
}


struct data find_best(struct data student[])
{
	int i, max, max_idx;
	
	
	max = student[0].math;
	max_idx = 0;
	
	for(i = 0; i < num; i++)
	{
		if(student[i].math > max)
		{
			max = student[i].math;
			max_idx = i;
		}
		//printf("%d. %s: %d\n", i, student[i].name, student[i].math);
	}
	
	return student[max_idx];
}

void fail(struct data student[])
{
	int i;
	printf("\nStudent fail list:\n");
	for(i = 0; i < num; i++)
	{
		if(student[i].math < 60)
		{
			printf("%d. %s: %d\n", i, student[i].name, student[i].math);	
		}
	}
}


void sort(struct data student[])
{
	int i, j;
	struct data temp;
	printf("\nSort Student list:\n");
	for(i = 0; i < num; i++)
	{
		for(j = i + 1; j < num; j++)
		{
			if(student[i].math < student[j].math)
			{
				temp = student[j];
				student[j] = student[i];
				student[i] = temp;
			}
		}
	}
	
	for(i = 0; i < num; i++)
	{
		printf("%d. %s: %d\n", i, student[i].name, student[i].math);	
	}
	
}

