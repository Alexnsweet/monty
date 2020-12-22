#include "monty.h"

/**
 * tokenizer - returns a NULL terminated array of string pointers
 * @str: string to tokenize
 * @delim: delimeter
 *
 * Return: NULL terminated array of string pointers to tokens
 */
char **tokenizer(char *str, char *delim)
{
	char **buffer;
	int delim_count = 0, i, token_count;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == *delim)
		{	delim_count++;	}
	}

		token_count = delim_count + 1;

	if (token_count == _strlen(str))
	{
		return (NULL);
	}

		buffer = malloc(sizeof(char *) * (token_count + 1));

		if (buffer == NULL)
		{	return (NULL);	}

		i = 0;
		buffer[i] = strtok(str, delim);
		i++;
		while (i < token_count)
		{
			buffer[i] = strtok(NULL, delim);
			i++;
		}
		buffer[i] = NULL;

		return (buffer);
}


