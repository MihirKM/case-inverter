/***********************
 * Invert case
 * every nth character
 * by Mihir
 * 04-26-2022
 **********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int nth;
	char input[BUFSIZ];
	char *n = "";
	if(argc != 2)
	{
		printf("Makes data inverted case every nth character\nUsage: %s [nth]\n", argv[0]);
		return 0;
	}
	nth = atoi(argv[1]);
	if(nth <= 0)
	{
		printf("nth must be greater than 0\n");
		return 0;
	}
	while(n != NULL)
	{
		n = fgets(input, BUFSIZ, stdin);
		if(n == NULL) break;
		for(unsigned int i = 0; i < strlen(input); i++)
		{
			if(i % nth == 0)
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
