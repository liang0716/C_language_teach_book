//8-27 
#include <stdio.h>
#include <stdlib.h>

int cnt = 0;
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
	
	cnt++;
	printf("counter�w�Q�I�s�F%d�� \n", cnt);
}
