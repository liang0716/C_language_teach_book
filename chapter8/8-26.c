//8-26
#include <stdio.h>
#include <stdlib.h>

double rpower(double b, int n);
void counter(void);
int main(void)
{


	printf("rpower(2.0, 3) = %f\n", rpower(2.0, 3));
	printf("\n");
	system("pause");
	return 0;
}


double rpower(double b, int n)
{
	counter();
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return b * rpower(b, n-1);
	}
}

void counter(void)
{
	static int cnt = 0;
	cnt++;
	printf("counter已被呼叫了%d次 \n", cnt);
}

