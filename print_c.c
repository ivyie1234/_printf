#include "main.h"

/**
 * print_char - Prints a character followed by a new line.
 * @c: The character to be printed.
 *
 * Return: 0 on success.
 */
int print_char(char c)
{
	put_char(c);
	put_char('\n');
	return 0;
}
