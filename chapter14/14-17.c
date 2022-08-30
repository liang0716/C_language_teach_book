//14-17 18 19 20 21 22 
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *createList(NODE *first, int data);//�@�Ӥ@�ӫ�node�A�q���ڴ��J 
void printfList(NODE *first);//�L�Xlist����node 
void freeList(NODE * first);//����O���� 
NODE *insertback(NODE *first, int base, int data);//���=base�Ȫ��ơA�b�e�����J��,��JNULL�ΨS���|��bug
NODE *insertfront(NODE *first, int base, int data);//���=base�Ȫ��ơA�b�᭱���J��,��JNULL�ΨS���|��bug
NODE *deleteList(NODE *first, int data);//�R�����w�ƭȪ�node�A��JNULL��bug
int listlenght(NODE *first);//�p��Xlist���� 
void combineList(NODE *first, NODE *second);//�X��2��list 

int main(void)
{
	int i;
	int arr1[] = {12, 43, 56, 34, 98, 76, 43, 24};
	int arr2[] = {0, 3, 6, 9};
	
	NODE *head1 = NULL, *head2 = NULL;
	
	for(i = 0; i < sizeof(arr1) / sizeof(int); i++)
	{			
		head1 = createList(head1, *(arr1 + i));
	}
	
	for(i = 0; i < sizeof(arr2) / sizeof(int); i++)
	{			
		head2 = createList(head2, *(arr2 + i));
	}
	
	printfList(head1);
	printfList(head2);
	//head = deleteList(head, 12);
	//printfList(head);
	

	head1 = insertback(head1, 24, 50);
	printfList(head1);
	printf("%d\n", listlenght(head1));
	combineList(head1, head2);
	printfList(head1);
	
	freeList(head1);
	freeList(head2);
	
	printf("\n");
	system("pause");
	return 0;
}

NODE *createList(NODE *first, int data)
{
	NODE *curr;
	curr = first;
	if(first == NULL)
	{
		first = (NODE *)malloc(sizeof(NODE));
		first->data = data;
		first->next = NULL;
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
	}
	return first;
}

void printfList(NODE *first)
{
	NODE *curr;
	curr = first;
	
	if(first == NULL)
	{ 
		printf("It's empty.\n");
	} 
	else
	{
		while(curr != NULL)
		{
			printf("address = %X, data = %d, next = %X\n", curr, curr->data, curr->next);
			curr = curr->next;
		}
	}
	printf("\n");
}

void freeList(NODE * first)
{
	NODE *curr, *tmp;
	while(curr->next != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
}

NODE *insertfront(NODE *first, int base, int data)
{
	NODE *curr, *node;
	node = (NODE *)malloc(sizeof(NODE));
	node->data = data;
	curr = first;
	
	if(base == first->data)
	{
		node->next = first;
		return node;
	}
	else
	{
		while(curr != NULL)
		{
			if(curr->next->data == base)
			{
				node->next = curr->next;
				curr->next = node;
				return first;
			}
			else
			{
				curr= curr->next;
			}
		}

	}
}

NODE *insertback(NODE *first, int base, int data)
{
	NODE *curr, *node;
	node = (NODE *)malloc(sizeof(NODE));
	node->data = data;
	curr = first;
	
	if(base == first->data)
	{
		node->next = first->next;
		first->next= node;
		return first;
	}
	else
	{

		while(curr->next != NULL)
		{
			if(curr->data != base)
			{
				curr = curr->next;
			}
			else
			{
				node->next = curr->next;
				curr->next = node;
				break;
			}
			
			if(curr->data == base)
			{
				curr->next = node;
				node->next = NULL;
				break;
			}
		}


		return first;
	}
}

NODE *deleteList(NODE *first, int data)
{
	NODE *curr, *temp;
	curr = first;
	if(first->data == data)
	{
		temp = first;
		first = first->next;
		free(temp);
	}
	else
	{
		while(curr->next != NULL)
		{
			if((curr->next)->data == data)
			{
				temp = curr->next;
				curr->next = (curr->next)->next;
				free(temp);
				break;
			}
			else
			{ 
				curr = curr->next;
			} 
		}
		if(curr == NULL)
		{
			printf("Not found node.\n");//����S�L
		}
	}
	return first;
}

int listlenght(NODE *first)
{
	NODE *curr;
	curr = first;
	int cnt = 1;
	
	while(curr->next != NULL)
	{
		curr = curr->next;
		cnt++;
	}
	return cnt;
}

void combineList(NODE *first, NODE *second)
{
	NODE *curr;
	curr = first;
	
	while(curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = second;
}


