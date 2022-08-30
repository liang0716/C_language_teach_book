// 15-4 
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h" 

int seven2ten(char *);

int main(void)
{
	char ch[4] = {'3' ,'0', '1', '2'};
	 
	
	//printf("sizeof(ch) = %d\n", sizeof(ch));
	printf("seven2ten(ch) = %d", seven2ten(ch));
	
	
	printf("\n");
	system("pause");
	return 0;
}


int seven2ten(char *ch)
{
	int i, sum = 0;
	
	for(i = 0; i < 4; i++)
	{ 
		sum += (*(ch + i) - 48) * pow_int(7, (4 - i - 1));
		printf("%d %d\n", (*(ch + i) - 48), (*(ch + i) - 48) * pow_int(7, (4 - i - 1)));
	}
	return sum;
}
