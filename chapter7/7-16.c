//7-16
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char ch;
	while((ch != 3) && (ch != 17))//反向要注意不是用|| 
	{
		ch = getch();
		printf("ASCII of ch = %d\n", ch);
	}
	printf("己按了 Ctrl + c 或 Ctrl + q\n");
	
	printf("\n");
	system("pause");
	return 0;
}

