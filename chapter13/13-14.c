//13-14
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//int i = 0;
	printf("argc = %d\n", argc);
	if(argc == 2)
	{
		/*
		while(*(argv[1]+i)!='\0')
		{
			//printf("ASCII %c = \n", *(argv[1]+i));
			i++;
		}
		*/
		printf("ASCII %c = %d\n", *(argv[1] + 0), *(argv[1] + 0));
		//printf("ASCII %c = %d\n", *(argv + 1) + 0), *(argv + 1) + 0));//不能用這種表示是因指標字元陣列，每一列長度不一不能直接用argv+1,會錯 
	}
	else
	{
		printf("key wrong num.\n");
	}

	printf("\n");
	system("pause");
	return 0;
}

