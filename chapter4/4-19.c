//4-19
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int num;
	char ch;
	
	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);
	printf("\n");
	
	
	fflush(stdin);
	
	
	printf("�п�J�@�r��: ");
	ch = getchar(); 
	printf("\n");


	printf("num = %d, ASCII of ch = %d", num, ch);

	system("pause");
	return 0;
}

