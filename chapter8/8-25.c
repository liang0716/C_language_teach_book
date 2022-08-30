//8-25.c
#include <stdio.h>
#include <stdlib.h>


int fibonanacci(int);
void counter(void);

int main(void)
{
	printf("fibonanacci(5) = %d\n", fibonanacci(5));
	printf("\n");
	system("pause");
	return 0;
}

int fibonanacci(int n)
{
	counter();
	if((n == 1) || (n == 2))
	{
		return 1;
	}
	else
	{
		return fibonanacci(n - 1) + fibonanacci(n - 2);
	}
}

void counter(void)
{
	static int cnt = 0;
	cnt++;
	printf("counter已被呼叫了%d次 \n", cnt);
}
