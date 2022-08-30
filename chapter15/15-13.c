//15-13 15-14 15-15
#include <stdio.h>
#include <stdlib.h>

struct status
{
	unsigned sex:1;
	unsigned marriage:1;
	unsigned age:7;
	unsigned money:24;
	unsigned height:8;
	unsigned weight:8;
};


int main(void)
{
	
	struct status tom;
	struct status lucy = { 0, 0, 9, 1000000, 162, 50};
	
	int a, b, c;
	
	printf("tom sex(0/1): ");
	scanf("%d", &a);
	
	printf("tom marriage(0/1): ");
	scanf("%d", &b);
	
	printf("tom age(0/1): ");
	scanf("%d", &c);
	
	tom.sex = a;
	tom.marriage = b;
	tom.age = c;
	
	
	printf("sizeof(tom): %d\n", sizeof(tom));
	printf("sizeof(lucy): %d\n", sizeof(lucy));
	
	if(tom.sex == 1)
	{
		printf("man.\n");
	}
	else
	{
		printf("woman.\n");
	}
	
	if(tom.marriage == 1)
	{
		printf("married.\n");
	}
	else
	{
		printf("single.\n");
	}
	
	printf("age = %d\n", tom.age);
	
	printf("\n");
	system("pause");
	return 0;
}

