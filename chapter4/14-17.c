//4-17
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a, b;
	printf("��J�Ĥ@�r��:");
	scanf("%c", &a);
	
	printf("\n");
	//(3) �άO�ϥ�fflush(stdin); 
	printf("��J�ĤG�r��:");// 
	scanf(" %c", &b);//�n�b%c�e�h���ť���A��scanf�u�Y�D�ťթΫDEnter���r�� 
	printf("\n");
	

	printf("a = %c, b = %c\n", a, b);
	system("pause");
	return 0;
}

