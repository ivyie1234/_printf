#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format - character string
 * Return: returns number of characters printed out
 */
int _printf(const char *format, ...) {
	va_list args;
	int r = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*(format) == 'd' || *(format) == 'i')
			{
			int p = va_arg(args, int);

			if (*(format) == 'd')
			{
				printf("%d", p);
			}
			else
			{
				printf("%i", p);
			}
			r++;
			format++;
			}
			else
			{
			putchar(*format);
			r++;
			format++;
			}

		format++;
		}
	}

	va_end(args);

	return (r);
}
