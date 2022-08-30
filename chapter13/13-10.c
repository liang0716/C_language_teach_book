//13-10
#include <stdio.h>
#include <stdlib.h>

#define STR "Hello Hell!\n" 


int main(void)
{
	#ifndef STR
		printf("STR is not define.\n");
	#else
		printf(STR);
	#endif


	printf("\n");
	system("pause");
	return 0;
}

