//7-16
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char ch;
	while((ch != 3) && (ch != 17))//�ϦV�n�`�N���O��|| 
	{
		ch = getch();
		printf("ASCII of ch = %d\n", ch);
	}
	printf("�v���F Ctrl + c �� Ctrl + q\n");
	
	printf("\n");
	system("pause");
	return 0;
}

