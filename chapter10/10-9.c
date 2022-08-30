//10-9 
#include <stdio.h>
#include <stdlib.h>


void address(float *);
int main(void)
{
	
	float pi =3.14f; 
	float *ptr = &pi;
	
	address(&pi);
	address(ptr);
	
	
	printf("\n");
	system("pause");
	return 0;
}

void address(float *f)
{
	printf("address = %p\n", f); 
} 

