//11-2 11-3 
#include <stdio.h>
#include <stdlib.h>

struct data
{
	int year;
	int month;
	int day;
}holiday={2004,4,26};

int main(void)
{

	struct data festival;
	printf("key in year:");
	scanf("%d", &festival.year);
	
	printf("key in month:");
	scanf("%d", &festival.month);
	
	printf("key in day:");
	scanf("%d", &festival.day);
	
	printf("%02d\\%02d\\%04d\n", holiday.month, holiday.day, holiday.year);
	printf("%02d\\%02d\\%04d\n", festival.month, festival.day, festival.year);
	
	printf("sizeof(data):%d", sizeof(data));
	printf("\n");
	system("pause");
	return 0;
}

