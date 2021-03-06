#include "monty.h"

/**
 * main - runs monty bytecode
 * 
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *buffer = NULL, **tokens;
	size_t buffSize;
	int gl;
	FILE *file_pointer;
	


	if (argc == 2)
	{
		file_pointer = fopen(argv[1], "r");

		if (file_pointer == NULL)
		{
			printf("Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	while (getline(&buffer, &buffSize, file_pointer) != -1)
	{
		tokens = tokenizer(buffer, " ");


		if (tokens != NULL)
		{
			/* monty compare the things and runs the right code */

			printf("tokenized\n");

			iscommand(tokens, buffer);
		}
		else
		{
			print_string("error");
		}
	}
	free(tokens);
	free(buffer);
	fclose(file_pointer);
	return (0);
}
	
