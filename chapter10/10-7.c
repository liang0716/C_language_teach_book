//10-7 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	ptr1 = &b;
	ptr2 = &a;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr1 = 4;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	a = 16;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr2 = 12;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	ptr2 = ptr1;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr1 = 19;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	ptr1 = &a;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	a = 7;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr2 = *ptr1;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);

	printf("\n");
	system("pause");
	return 0;
}

