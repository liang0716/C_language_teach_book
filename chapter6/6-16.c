//6-16.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../function_list/power.c"

int main(void)
{

	char q;
	int a, b, c;
	double s;
	do
	{
		printf("ax^2 + bx + c = 0\n");
		printf("�ӧO��Ja b c\n");
		scanf("%d %d %d", &a, &b, &c);
		
		s = (double) pow_int(b, 2) - 4 * a* c;
		
		if(s > 0)
		{
			printf("����ӹ��: %f , %f\n", (-b + sqrt(s))/(2 * a), (-b - sqrt(s))/(2 * a));
		}
		else if(s == 0)
		{
			printf("��ӹ�ڬۦP: %f\n", (double)-b/2*a);
		}
		else
		{
			printf("�L���\n");
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

