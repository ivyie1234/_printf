#include "main.h"

/**
 * print_char - it prints out characters
 * @val: argument
 * Return: 1
 */
int printf_char(va_list,val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
