#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
	{
	int password = 0xbebebaba;
	char name[128] = {0};

	setbuf(stdout,(char*)0x0);	
	setbuf(stdin,(char*)0x0);	
	setbuf(stderr,(char*)0x0);	

	printf("Enter your name: ");
	fflush(stdout);
	read(0,name,128);
	printf("Hello ");
	printf(name);
	fflush(stdout);

	printf("Enter very secret password: ");
	int enter_password;
	scanf("%d",&enter_password);
	
	if (password == enter_password)
		{
		seteuid(getuid());
		printf("ctfschool{They_don't_even_have_binary,nothing_ever_happens...}\n");
		}
	else
		{
		printf("Wrong password!\n");
		}
	return 0;
	}
