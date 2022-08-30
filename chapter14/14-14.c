//14-14
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *createList(NODE *, int);
void printfList(NODE *);
void freeList(NODE *);
NODE *searchNode(NODE *, int );
NODE *deleteNode(NODE *, int);

int main(void)
{
	int i;
	int arr[4] = {12, 38, 64, 37};
	NODE *head = NULL;
	
	for(i = 0; i < (sizeof(arr) / sizeof(int)); i++)
	{
		head = createList(head, *(arr + i));
	}
	
	printfList(head);
	head = deleteNode(head, 60);
	printfList(head);
	head = deleteNode(head, 37);
	printfList(head);
	freeList(head);
	
	printf("\n");
	system("pause");
	return 0;
}


NODE *createList(NODE *head, int data)
{
	NODE *curr;
	curr = head;
	
	if(head == NULL)
	{
		head = (NODE *)malloc(sizeof(NODE));
		head->data = data;
		head->next = NULL;
		return head;
	}
	else
	{
		while(curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = (NODE *)malloc(sizeof(NODE));
		curr = curr->next;
		curr->data = data;
		curr->next = NULL;
		return head;
	}
}
void printfList(NODE *head)
{
	NODE *curr;
	curr = head;
	while(curr != NULL)
	{
		printf("%d \n", curr->data);
		curr = curr->next;
	}
	printf("\n");
}

void freeList(NODE *head)
{
	NODE *curr, *temp;
	curr = head;
	while(curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}

NODE *searchNode(NODE *head, int data)
{
	NODE *curr = head;
	if(head != NULL)
	{
		while(curr != NULL)
		{
			if(curr->data = data)
			{
				return curr;
			}
			curr = curr->next;
		}
		return head;
	}
	else
	{
		printf("It's empty.\n");
		return head;
	}
}

NODE *deleteNode(NODE *head, int data)//填NULL會有問題，當找過一次NULL後，head會被蓋成NULL 
{
	NODE *curr, *temp;
	curr = head;
	if(head != NULL)
	{
		if(head->data == data)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		else
		{
			while(curr->next != NULL)
			{
				if((curr->next)->data != data)
				{
					curr = curr->next;
				}
				else
				{
					temp = curr->next;
					curr->next = (curr->next)->next;
					free(temp);
					break;
				}
			}
			if(curr == NULL)
			{
				printf("Not found node.\n");//為何沒印
			}

		}
	}
	else
	{
		printf("It's empty.\n");
	}
	return head;
}

