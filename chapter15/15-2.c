//15-2 15-3//哀 寫了快3小時 要改進的地方還很多 
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h" 

#ifndef SIZE
#define SIZE 8
#endif
void mode_12(int);
int mode_12_to_10(char *);

int main(void)
{
	int i;
	for(i = 1; i < 22; i++)
	{
		printf("%02d: ", i);
		
		mode_12(i);
		printf("\n");
	}

	char ar[3]={'2', 'B', '6'};
	printf("mode_12_to_10(ar) = %d\n", mode_12_to_10(ar));
	
	printf("\n");
	system("pause");
	return 0;
}

void mode_12(int num)
{
	int i = 0;
	char temp;

	char ch[SIZE];
	
	
	while(num)
	{
		if((num % 12) <= 9)
		{
			ch[i] = (num % 12)+48;
		}
		else
		{
			ch[i] = ((num % 12) == 10)? 'A': 'B';
		}
		num /= 12;
		i++;
	}

	for(;i < SIZE; i++)
	{
		ch[i] = 48;
	}
	for(i = SIZE-1; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}
	
	
	
}

int mode_12_to_10(char *arr)
{
	int i, num, sum = 0;
	
	for(i = 2; i >= 0; i--)
	{
		if((*(arr + i) >= 65) && (*(arr + i) <= 90))
		{
			if((*(arr + i)) == 'A')
			{
				num = 10 ;
			}
			else if((*(arr + i)) == 'B')
			{
				num = 11 ;
			}
		}
		else
		{
			num = (*(arr + i)) - 48;
		}
		
		num *= pow_int(12, 2-i);
		sum += num;
	}
	return sum;
}

