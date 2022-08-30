//10-6 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a = 12, b = 7;
	int *ptr;
	ptr = &a;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	*ptr = 19;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	ptr =&b;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	b = 16;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	*ptr = 12;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	a = 17;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	ptr = &a;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	a = b;
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	*ptr =63; 
	printf("a = %2d, b = %2d, ptr = %p, *ptr = %2d\n", a, b, ptr, *ptr);
	
	printf("\n");
	system("pause");
	return 0;
}

