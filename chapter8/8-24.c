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
	printf("counter�w�Q�I�s�F%d�� \n", cnt);
}

