//8-18
//fibonacci function 
//   1   2   3   4   5   6   7   8   9  10...除了期兩項為1外, 第N項為(N-1)+(N-2)
//   1   1   2   3   5   8  13  21  34  55
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);

int main(void)
{
	int num;
	
	num = fibonanacci(10);
	printf("fibon(10) = %d\n", num);
	
	printf("\n");
	system("pause");
	return 0;
}

//以迴圈寫的 
int fibonanacci(int n)
{

	int i, tmp_1, tmp_2, mid;
	int sum = 0;
	
	for(i = 1; i <= n; i++)
	{
		if(i <= 2)
		{
			
			tmp_1 = 1;
			tmp_2 = sum;
		}
		else
		{
			mid = tmp_2;
			tmp_2 = sum;
			tmp_1 = mid; 
		}
		sum = tmp_1 + tmp_2;
		printf("fibon(%d) = %d\t",i , sum);
	}
	return sum;
}

