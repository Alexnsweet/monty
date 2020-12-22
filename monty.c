#include "monty.h"

/**
 * main - runs monty bytecode
 *
 * Return: 0
 */
int main(void)
{
	char *buffer = NULL, **tokens;
	size_t buffSize = 0;
	int gl;

	gl = getline(&buffer, &buffSize, stdin);

	if (gl > 0)
	{
		tokens = tokenizer(buffer, " ");

		if (tokens != NULL)
		{
			/* monty compare the things and runs the right code */
		}
