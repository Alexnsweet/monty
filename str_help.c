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

/**
 * _strlen - Counts the number of chars in a string
 * @s: string to count
 *
 * Return: number of characters in a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{	i++;	}

	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if same or < > if s1 or s2 is less or greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
		return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * print_string - writes number of chars in string
 * @str: string to print
 *
 * Return: -1 if error (errno is set) or # of bytes written on success
 */
int print_string(char *str)
{
	int i = 0;

	i = write(1, str, _strlen(str));

	return (i);
}
