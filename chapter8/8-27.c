//8-27//�ǩǪ� 
#include <stdio.h>
#include <stdlib.h>


int fib_for(int);
int fib_res(int);

int main(void)
{
	int i = 30;
	for(i =1; i<=30; i++)
	{
		printf("n= %d, for�j�� %d��, ���j%d��\n", i, fib_for(i), fib_res(i));
	}

	printf("\n");
	system("pause");
	return 0;
}


//�H�j��g�� 
int fib_for(int n)
{
	int cnt_f = 0;
	
	int i, tmp_1, tmp_2, mid;
	int sum = 0;
	
	for(i = 1; i <= n; i++)
	{
		cnt_f++;
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
		//printf("fibon(%d) = %d\t",i , sum);
	}
	return cnt_f;
}

//�H���j�g�� 
int fib_res(int n)
{
	static int cnt_r = 0;
	cnt_r++;
	int sum = 0;
	if((n == 1) || (n == 2))
	{
		sum = 1;
	}
	else
	{
		sum = fib_res(n - 1) + fib_res(n - 2);
	}
	return cnt_r;
}



