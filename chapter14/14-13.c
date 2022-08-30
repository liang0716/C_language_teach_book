//14-3
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *createList(NODE *, int );

void printfList(NODE *);

void freeList(NODE *);

int countList(NODE *);

NODE *indexInsert(NODE *, int , int );

int main(void)
{
	int i;
	int arr[4] = {12,38,64,37};
	NODE *head = NULL;
	for(i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		head = createList(head, *(arr+i));
	}
	
	printfList(head);
	
	head = indexInsert(head, 3, 47);//插入第二個後面 
	
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
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	printf("\n");
}

void freeList(NODE * head)
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

int countList(NODE *head)
{
	NODE *curr;
	int cnt = 1;
	curr = head;
	
	while(curr != NULL)
	{
		curr = curr->next;
		cnt++;
	}
	return cnt;
}

NODE *indexInsert(NODE *head, int idx, int data)
{
	NODE *node, *curr;
	curr = head;
	node = (NODE *)malloc(sizeof(NODE));
	node->data = data;
	
	if(idx == 0)
	{
		node->next = head;
		return node;
	}
	else
	{
		if(idx >= countList(head))
		{
			while(curr -> next != NULL)
			{
				curr = curr->next;
			}
			node->next = NULL;
			curr->next = node;
		}
		else
		{
			while((idx - 1) > 0)
			{
				curr = curr->next;
				idx--;
			}
			node->next = curr->next;
			curr->next = node;
		}
		return head;
	}

}
