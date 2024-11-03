#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

const char* charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const size_t str_len = 21;

void get_random_line(char * str, size_t str_len)
	{
	FILE* fd = fopen("/dev/urandom","r");
	//arc4random_buf(str,str_len-2);
	for (size_t i = 0; i < str_len - 1; i++)
		{
		char symbol = fgetc(fd);
		size_t index = symbol % strlen(charset);
		str[i] = charset[index];
		}
	str[str_len - 1] = '\0'; 
	}

int test_luck()
	{
	char* random_line[str_len];
	get_random_line(random_line, str_len);
	char your_line[str_len];

	printf("Enter line of 20 symbols and see if it's your lucky day: ");
	scanf("%s",your_line);

	if (!strcmp(random_line,your_line)) {return 1;}
	else {return 0;}
	}

int main()
	{
	printf("Are you ready to test your luck?\n");
	if (test_luck())
		{
		printf("Today is your lucky day!\n");
		system("/bin/cat flag");
		}
	else
		{
		printf("Better luck next time!\n");
		}
	}
