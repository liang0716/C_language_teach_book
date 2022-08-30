//第四章課後作業4.1~4.9轉出函數printf() 
#include <stdlib.h>
#include <stdio.h>

int main(Void)
{
	//4.1
	printf("I love C language best.\n");
	
	//4.2
	printf("\"I love C language best.\"\n");
	
	//4.3
	printf("\"Hello, C\"\n");
	printf("\"Hello, world\"\n");
	
	//4.4
	printf("\"100/4=25\"\n");
	
	//4.5
	printf("\'30%%的學生來自中部地區，42%%的學生來自南部地區\'\n");
	
	//4.6
	float num_0;
	num_0 = 28.47f;
	printf("num_0=%07.2f\n", num_0);
	
	//4.7
	float num_1 = 12.34f;
	printf("num_1=%+08.2f\n", num_1);
	
	//4.8
	printf("There is a old saying, \"Love me, love my dog.\"\n");
	system("pause");
	return 0;
}
