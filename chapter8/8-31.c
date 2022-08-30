//8-31 ~ 8-34
#include <stdio.h>
#include <stdlib.h>


#define f(x) 4 * (x) * (x) + 6 * (x) - 5
#define CUBIC(x)  (x) * (x) * (x)
#define AVERAGE(x, y)  ((x) + (y))/2
#define ABS(x) ((x) > 0)? (x): -(x)

int main(void)
{


	printf("f(x)=%f\n", f(1.0));
	printf("f(x)=%f\n", f(2.2));
	printf("f(x)=%f\n", f(3.14));
	
	
	printf("CUBIC(x)=%d\n", CUBIC(5));
	printf("CUBIC(x)=%f\n", CUBIC(2.4));
	
	
	printf("AVERAGE(x, y)=%f\n", AVERAGE(12.6, 4.2));
	
	
	printf("ABS(x)=%f\n", ABS(-13.6));
	
	
	system("pause");
	return 0;
}

