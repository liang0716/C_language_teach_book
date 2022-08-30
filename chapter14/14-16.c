//14-16
#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef NODE* NODEp; 

int main(void)
{
	int i, val, num;
	
	NODEp first, curr, prev, tmp;
	printf("Number of nodes:");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		curr = (NODEp)malloc(sizeof(NODE));
		printf("data for node %d: ", i+1);
		scanf("%d", &(curr->data));
		if(i==0)
		{
			first = curr;
		}
		else
		{
			prev->next = curr;
		}
		curr->next = NULL;
		prev = curr;
	}
	
	curr = first;
	
	while(curr != NULL)
	{
		printf("address: %X, data = %d, next = %X\n", curr, curr->data, curr->next);
		curr = curr->next;
	}
	
	curr = first;
	while(curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	
	printf("\n");
	system("pause");
	return 0;
}

