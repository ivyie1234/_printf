#include "main.h"

/**
 * print_string - Prints a string followed by a new line.
 * @s: The input string.
 *
 * Return: 0 on success, -1 if the input string is NULL.
 */
int print_string(char *s)
{
	if (s == NULL)
	{
		printf("NULL\n");
		return -1;
	}

	while (*s != '\0')
	{
		put_char(*s);
		s++;
	}

	put_char('\n');
	return (0);
}

