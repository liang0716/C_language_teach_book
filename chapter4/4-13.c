#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[10];
	char line[5] = {"\\\\\\\\\\"};
	printf("��J10�Ӧr��(ex:khgfkjgsvk):");
	scanf("%s", s);
	
	//(1)
	printf("\"%s\"\n", s);
	
	//(2)�n������10�Ӧr���]�n�L�X�ťթҥe�� 
	printf("%s%s%s\n",line , s, line);
	
	//(3)�n������10�Ӧr���]�n�L�X�ťթҥe��A�B�n�a����� 
	
	printf("\n");
	system("pause");
	return 0;
}

