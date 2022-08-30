//11-6 11-7
#include <stdio.h>
#include <stdlib.h>

struct date
{
	int month;
	int day;
};

struct data
{
	char name[10];
	int math;
	struct date birth;
};


int main(void)
{
	
	struct data student;
	
	printf("key in name: ");
	scanf("%s", student.name);
	
	
	printf("key in math: ");
	scanf("%d", &student.math);
	
	
	printf("key in month: ");
	scanf("%d", &student.birth.month); 
	
	
	printf("key in day: ");
	scanf("%d", &student.birth.day); 
	
	printf("name: %s\n", student.name);
	printf("math: %d\n", student.math);
	printf("birth: %02d/%02d\n", student.birth.month, student.birth.day);
	
	printf("sizeof(student): %d\n", sizeof(student));
	printf("\n");
	system("pause");
	return 0;
}

