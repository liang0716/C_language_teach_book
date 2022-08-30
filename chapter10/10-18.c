//10-18 10-19 10-20 10-21 10-22
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"


void display(char *ptr, int n);
int main(void)
{
	int i;
	
	char *ptr = "We are the best friends.";
	
	
	
	//10-18 19
	printf("cnt = %d\n", char_cnt(ptr));
	
	
	//10-20
	char *ptr_aa[3] = {"Leon", "Jack", "Miles"};
	for(i = 0; i < 3; i++)
	{
		printf("ptr_aa + %d cnt = %d\n", i, char_cnt(*(ptr_aa + i)));
		
		//10-21 
		display((*(ptr_aa + i)), i);
		printf("\n");
		
		
	}
	
	
	//10-22
	char str[2][20]= {"Time is money.", "Have a good time."};
	
	for(i = 0; i < 2; i++)
	{
		puts(*(str+ i));
	}
	 
	
	printf("\n");
	system("pause");
	return 0;
}

void display(char *ptr, int n)
{
	int i;
	while(*(ptr+i) != '\0')
	{
		if(i >= n)
		{
			printf("%c", *(ptr +i));
		}
		i++;
	}
}
