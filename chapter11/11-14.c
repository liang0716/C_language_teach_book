//11-14 11-15 
#include <stdio.h>
#include <stdlib.h>



struct data
{
	char name[10];
	int math;
};

void display(struct data);
void add5(struct data *);

int main(void)
{
	struct data student = {"Jenny", 74};
	
	display(student);
	printf("name: %s math: %d\n", student.name, student.math);
	
	
	add5(&student);
	printf("name: %s math: %d\n", student.name, student.math);
	
	printf("\n");
	system("pause");
	return 0;
}

void display(struct data student)
{
	student.math+=10;
	printf("name: %s math: %d\n", student.name, student.math);
}

void add5(struct data *student)
{
	student->math += 5;
	printf("name: %s math: %d\n", student->name, student->math);
}
