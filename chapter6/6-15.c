//4-15 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int need, input;
	int c_500, c_100, c_50, c_10, c_5, c_1;
	char q;
	
	
	do
	{
		printf("�ݥI�ڪ��B: ");
		scanf("%d", &need);
		printf("\n");
		
		printf("��I���B: ");
		scanf("%d", &input);
		printf("\n");
		//output = input- need;
		printf("��s���B: %d\n", input - need);

		printf("\n");
		
		
		if((input -= need) > 0)
		{
			printf("��s500���i��: %d", input / 500);
			input %= 500;

			printf(" ,100���i��: %d", input / 100);
			input %= 100;
			
			printf(" ,50���Ӽ�: %d", input / 50);
			input %= 50;
			
			printf(" ,10���Ӽ�: %d", input / 10);
			input %= 10;
			
			printf(" ,5���Ӽ�: %d", input / 5);
			input %= 5;
			
			printf(" ,1���Ӽ�: %d\n", input);

		}
		else if(input == need)
		{
			printf("�I�ڪ��B��n������s\n");
		}
		else
		{
			printf("�I�ڪ��B����\n");
		}
		
		printf("\nPlay again?(Y/N)\n");
		scanf(" %c", &q);
		printf("\n");
	}
	while((q == 'Y') || (q == 'y'));

	printf("\n");
	system("pause");
	return 0;
}

