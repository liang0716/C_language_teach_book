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
		//printf("ASCII %c = %d\n", *(argv + 1) + 0), *(argv + 1) + 0));//����γo�ت�ܬO�]���Цr���}�C�A�C�@�C���פ��@���ઽ����argv+1,�|�� 
	}
	else
	{
		printf("key wrong num.\n");
	}

	printf("\n");
	system("pause");
	return 0;
}

