//10-5
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 5, b = 10;
	int *ptr1, *ptr2;
	//printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);// ptr 沒assign前 如果打開下面都不會印 
	ptr1 = &a;
	//printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);// ptr 沒assign前 如果打開下面都不會印 
	ptr2 = &b;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr1 = 7;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr2 = 32;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	a = 17;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	ptr1 = ptr2;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr1 = 9;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	ptr1 = &a;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	a = 64;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	*ptr2 = *ptr1 + 5;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	ptr2 = &a;
	printf("a = %2d, b = %2d, ptr1 = %p, *ptr1 = %2d, ptr2 = %p, *ptr2 = %2d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
	
	


	printf("\n");
	system("pause");
	return 0;
}

