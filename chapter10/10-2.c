//10-2 10-3 10-4
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	float num = 4.2f;
	int a1 = 4, a2 = 12;
	
	printf("num =%f, &num =%p\n", num, &num);
	
	printf("a1 =%d, &a1 =%p\n", a1, &a1);
	printf("a2 =%d, &a2 =%p\n", a2, &a2);
	
	
	double b1 =3.14;
	int ii = 5;
	printf("b1 =%f, &b1 =%p\n", b1, &b1);
	
	printf("ii =%d, &ii =%p\n", ii, &ii);
	
	float f =12.56f, *ptr;
	ptr = &f;
	
	printf("f = %f, f address = %p\n", f, &f);
	printf("ptr = %p, *ptr = %f, ptr address = %p\n", ptr, *ptr,  &ptr);
	
	
	
	
	printf("\n");
	system("pause");
	return 0;
}

