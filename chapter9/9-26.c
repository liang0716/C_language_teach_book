//9-26~9-28
#include <stdio.h>
#include <stdlib.h>



int length(char str[]);

void reverse(char str_r[]);

void toLower(char str[]);

int main(void)
{

	char ch[20] ="Hello, Hell.";
	char str_r[20];
	
	printf("length(ch)= %d\n", length(ch));
	
	printf("key string\n");
	gets(str_r);
	

	reverse(str_r);


	toLower(str_r);
	puts(str_r);

	printf("\n");
	system("pause");
	return 0;
}


int length(char str[])
{
	int i, cnt=0;
	for(i = 0; i < 20; i++)
	{
		//printf("%d\n", str[i]);
		if(str[i] == '\0')
		{
			break;
		}
		cnt++;
	}
	return cnt;
}

void reverse(char str_r[])
{
	int i, j=0;
	char rrr[20];
	for(i=20; i>=0; i--)
	{
		if(str_r[i] == '\0')
		{
			j = 0;
			continue;
		}
		else
		{
			rrr[j] = str_r[i];
			j++;
		}
	}
	rrr[j] = '\0';
	puts(rrr);
}

void toLower(char str[])
{
	int i =0; 
	for(i = 0; i < 20; i++)
	{
		if((str[i] <= 90) && (str[i] >= 65))
		{
			str[i]+=32;
		}
	}
	puts(str);
}
