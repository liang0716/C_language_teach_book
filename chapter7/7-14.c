//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int m = 3000;
	int cnt = 0;
	while(m > 5)
	{
		m /= 2;
		cnt++;
	} 
	printf("cnt: %d", cnt);
	printf("\n");
	system("pause");
	return 0;
}

