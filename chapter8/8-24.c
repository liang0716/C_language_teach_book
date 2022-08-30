//8-24
#include <stdio.h>
#include <stdlib.h>


void counter(void);
int main(void)
{

	counter();
	counter();
	printf("\n");
	system("pause");
	return 0;
}

void counter(void)
{
	static int cnt = 0;
	cnt++;
	printf("counter已被呼叫了%d次 \n", cnt);
}

