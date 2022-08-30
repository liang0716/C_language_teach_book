//10-9
#include <stdio.h>
#include <stdlib.h>


void count(int *);
int main(void)
{
	int cnt = 0;
	count( &cnt);
	count( &cnt);
	
	count( &cnt);
	count( &cnt);
	count( &cnt);
	count( &cnt);

	printf("\n");
	system("pause");
	return 0;
}

void count(int *cnt)
{
	(*cnt)++;
	printf("©I¥scount²Ä%d¦¸\n", *cnt); 
} 


