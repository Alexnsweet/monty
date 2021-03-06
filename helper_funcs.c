#include "monty.h"

/**
 * iscommand - checks line input to see if it's a monty command
 * @tokens: tokenized line arguments
 * @buffer: line argument
 *
 * Return: 0 if not a builtin or 2 if builtin
 */
int iscommand(char **tokens, char *buffer)
{
	int *ip;
	
	if (_strcmp(tokens[0], "push") == 0)
	{
		printf("made it to push command\n");

		ip = malloc(sizeof(int));
		*ip = atoi(tokens[1]);
		printf("tokens1 is %d\n", *ip); /* replace with adding to stack */

		free(ip);
		return (2);
	}

		return (0);
}
