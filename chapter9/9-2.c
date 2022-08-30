//9-6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, cnt =0;
	int array[] = {3,5,0,3,2,4,1,6,8,5,4,3,2};
	printf("num: %d\n", sizeof(array) / sizeof(int));
	for(i = 0; i<sizeof(array) / sizeof(int); i++)
	{
		if((array[i] >= 3) &&(array[i] <= 6))
		cnt++;
	}
	printf("cnt: %d", cnt);
	
	printf("\n");
	system("pause");
	return 0;
}

