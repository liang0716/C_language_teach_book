//13-7
#include <stdio.h>
#include <stdlib.h>

void count(void);

int cnt;

int main(void)
{
	
	printf("¿é¤J¤@­Ècnt:\n");
	scanf("%d", &cnt);
	printf("cnt = %d\n", cnt);
	count();
	count();
	cnt++;
	printf("cnt = %d\n", cnt);

	printf("\n");
	system("pause");
	return 0;
}

