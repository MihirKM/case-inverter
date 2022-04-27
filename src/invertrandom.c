/***********************
 * Invert case
 * randomly
 * by Mihir
 * 04-26-2022
 **********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char invert(char character)
{
	if(character >= 'A' && character <= 'Z')
		return character + 32;
	else if(character >= 'a' && character <= 'z')
		return character - 32;
	else
		return character;
}
int main(int argc, char **argv)
{
	srand(time(NULL));
	char input[BUFSIZ];
	char *n = "";
	if(argc != 1)
	{
		printf("Makes data inverted case randomly\nUsage: %s\n", argv[0]);
		return 0;
	}
	while(n != NULL)
	{
		n = fgets(input, BUFSIZ, stdin);
		if(n == NULL) break;
		for(unsigned int i = 0; i < strlen(input); i++)
		{
			if(rand() % 2)
			{
				printf("%c", invert(input[i]));
			}
			else
			{
				printf("%c", input[i]);
			}
		}
	}
	return 0;
}
