//7-34
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int num = 0;
	
	while(1)
	{	num++;
		if((num - 1) % 3) continue;
		if((num - 3) % 5) continue;
		if((num - 2) % 7) continue;
		break;
	}

	printf("%d\n", num);
	system("pause");
	return 0;
}

