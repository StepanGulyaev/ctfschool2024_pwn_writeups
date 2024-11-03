#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void portal()
	{
    	char *filepath = "/bin/cat";
    	char *argv[] = { filepath, "flag", NULL };
    	execv(filepath, argv);
	}

int main()
	{
	char name[64];
	printf("Hello and, again, welcome to the Aperture Science computer-aided enrichment center.\n");
	printf("We hope your brief detention in the relaxation vault has been a pleasant one.\n");
	printf("Your specimen has been processed and we are now ready to begin the test proper.\n");
	printf("Before we start, however, keep in mind that although fun and learning are the primary\ngoals of all enrichment center activities, serious injuries may occur.\n");
	printf("Please do not attempt to remove testing apparatus from the testing area.\n");
	printf("Enter your name: ");
	scanf("%s",name);
	}
