//11-4 11-5
#include <stdio.h>
#include <stdlib.h>

struct time
{
	int hour;
	int min;
	double sec;
};


int main(void)
{

	struct time start ={12, 32, 25.49}, end = {15, 12, 17.53}, elapse;

	
	printf("%02d\\%02d\\%04.2f\n", start.hour, start.min, start.sec);
	printf("%02d\\%02d\\%04.2f\n", end.hour, end.min, end.sec);
	
	if(end.sec-start.sec > 0)
	{
		elapse.sec = end.sec - start.sec;
	}
	else
	{
		elapse.sec = 60 - start.sec + end.sec;
		end.min--;
	}
	
	if(end.min-start.min > 0)
	{
		elapse.min = end.min - start.min;
	}
	else
	{
		elapse.min = 60 - start.min + end.min;
		end.hour--;
	}
	 
	elapse.hour = end.hour - start.hour;
	
	printf("%02d\\%02d\\%04.2f\n", elapse.hour, elapse.min, elapse.sec);
	
	
	printf("sizeof(start):%d", sizeof(start));
	
	
	printf("\n");
	system("pause");
	return 0;
}

