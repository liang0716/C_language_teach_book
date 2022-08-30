//9-23~9-25
#include <stdio.h>
#include <stdlib.h>

int main(void)
{


	char str[] = "Hello, C language.";
	
	char str_1[20];
	int i;
	int a_cnt = 0, e_cnt = 0;
	
	printf("sizeof(str[])=%d\n", sizeof(str));
	
	printf("key string\n");
	scanf(" %s", str_1);
	for(i = 0; i < 20; i++)
	{
		if(str_1[i] == 'a')
		{
			a_cnt++;
		}
		if(str_1[i] == 'e')
		{
			e_cnt++;
		}
		
		if((str_1[i] <= 90) && (str_1[i] >= 65))
		{
			str_1[i]+=32;
		}
		
	}
	printf("\na_cnt:%d e_cnt:%d\n", a_cnt, e_cnt);
	puts(str_1);
	
	
	
	
/*
	char q;
	do
	{


		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));
*/
	printf("\n");
	system("pause");
	return 0;
}

