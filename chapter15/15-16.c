//
#include <stdio.h>
#include <stdlib.h>


struct computer
{
	unsigned floppy:3;
	unsigned hard_disk:6;
	unsigned cd_rom:6;
	unsigned printer:5;
};


int main(void)
{
	int a,b,c,d;
	struct computer user;
	
	printf("key num of floppy: ");
	scanf("%d", &a);
	
	printf("\nkey num of hard_disk: ");
	scanf("%d", &b);
	
	printf("\nkey num of cd_rom: ");
	scanf("%d", &c);
	
	printf("\nkey num of printer: ");
	scanf("%d", &d);
	
	user.floppy = a;
	user.hard_disk = b;
	user.cd_rom = c;
	user.printer = d;
	
	printf("\nfloppy:  %d\n", user.floppy);
	printf("hard_disk:  %d\n", user.hard_disk);
	printf("cd_rom:  %d\n", user.cd_rom);
	printf("printer:  %d\n", user.printer);
	

	printf("\n");
	system("pause");
	return 0;
}

