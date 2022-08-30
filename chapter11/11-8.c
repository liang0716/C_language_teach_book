//
#include <stdio.h>
#include <stdlib.h>


struct time
{
	int hour;
	int min;
	double sec;
};

struct date
{
	int year;
	int month;
	int day;
	struct time clock; 
};





int main(void)
{

	struct date now  ={
		2022, 8, 18, {19, 19, 50.31}
		
	};

	printf("%02d/%02d/%04d", now.month, now.day, now.year);
	printf("  %02d/%02d/%04.2f\n", now.clock.hour, now.clock.min, now.clock.sec);
	printf("sizeof(date): %d\n", sizeof(now));
	printf("\n");
	system("pause");
	return 0;
}

