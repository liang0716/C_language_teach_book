//14-9 10 11 
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} NODE;


int main(void)
{
	NODE a, b, c, d;
	NODE *ptr;
	ptr = &a;
	
	a.data = 12;
	a.next = &b;
	
	b.data = 38;
	b.next = &c;

	c.data = 64;
	c.next = &d;
	
	d.data = 37;
	d.next = NULL;
	
	while(ptr != NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	
	//14-10插入47在第三節點後 
	printf("insert 92 after second node.\n");
	ptr = &a;
	NODE ins;
	b.next = &ins;
	ins.data = 92;
	ins.next = &c;
	while(ptr != NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	
	//14-11刪除38的節點 
	printf("insert 38 the second node.\n");
	ptr = &a;
	a.next = &ins;
	b.next = NULL;
	while(ptr != NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
	
	printf("\n");
	system("pause");
	return 0;
}

