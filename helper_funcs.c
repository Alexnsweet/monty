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
	int i;
	
	if (_strcmp(tokens[0], "push") == 0)
	{
		printf("made it to push command\n");

		print_string(tokens[1]); /* replace with adding to stack */
		print_string("\n");
		return (2);
	}

		return (0);
}
