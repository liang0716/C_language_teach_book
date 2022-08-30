//13-10
#include <stdio.h>
#include <stdlib.h>

#define SIZE 15 


int main(void)
{
	#ifdef SIZE
		#if SIZE > 20
			char str[SIZE] = "Hello Hell.\n";
		#elif (SIZE >= 10)&&(SIZE < 20)
			char *str = "Hello C.\n";
		#else
			char *str ="size is too small.\n";
		#endif
		
		printf("%s", str);
	#else
		printf("SIZE is not define.\n");
	#endif


	printf("\n");
	system("pause");
	return 0;
}

