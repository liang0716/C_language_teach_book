#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[10];
	char line[5] = {"\\\\\\\\\\"};
	printf("輸入10個字元(ex:khgfkjgsvk):");
	scanf("%s", s);
	
	//(1)
	printf("\"%s\"\n", s);
	
	//(2)好像不足10個字元也要印出空白所占位 
	printf("%s%s%s\n",line , s, line);
	
	//(3)好像不足10個字元也要印出空白所占位，且要靠左對齊 
	
	printf("\n");
	system("pause");
	return 0;
}

