//14-12
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *createNode(NODE *, int);
void printNode(NODE *);
void forfree(NODE *);

int main(void)
{
	int i;
	int arr[] = {12,38,64,37};
	NODE *head =NULL;


	for(i = 0; i < (sizeof(arr)/sizeof(int)); i++)
	{
		printf("%d = %d\n", i, *(arr + i));
		head = createNode(head, *(arr + i));
	}
	
	printNode(head);
	forfree(head);

	printf("\n");
	system("pause");
	return 0;
}

NODE *createNode(NODE *head, int data)
{
	NODE *current;
	current = head;
	
	if(current == NULL)
	{
	
		head = (NODE *)malloc(sizeof(NODE));
		
		head->data = data;
		
		head->next = NULL;
		
		return head;
	}
	else
	{
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = (NODE *)malloc(sizeof(NODE));
		current = current->next;
		current->data = data;
		current->next = NULL;
	
		return head;	
	}

}
void printNode(NODE *first)
{
	
	NODE *current;
	current = first;
	
	while(current != NULL)
	{
		printf("node: %X, data: %d, next: %X\n", current, current->data, current->next);
		current = current->next;
	}

}
void forfree(NODE *head)
{
	NODE *current, *temp;
	current = head;
	
	while(current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
