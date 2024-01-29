#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int r = 0;
	char p;
	char q;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				p = va_arg(args, char *);

				while (*p != '\0')
				{
					r += putchar(*p);
					p++;
				}
			}
			else if (*format == 'c')
			{
				q = va_arg(args, int);
				r + putchar(q);
			}
			else if (*format == '%')
				r += putchar('%');
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end args;

	return (r);
}
