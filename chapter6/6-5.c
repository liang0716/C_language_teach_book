//6-5~6-6
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char q;
	int kg, cm; 
	do
	{
		printf("��J���� �魫 �H�ťդ��j\n");
		scanf("%d %d", &cm, &kg);
		
		if((cm < 180) && (kg > 90))
		{
			printf("�魫�L��\n");
		}
		else
		{
			printf("���|�L��\n");
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

