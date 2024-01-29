#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	va_start(args, format);
	int r = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *p = va_arg(args,char *);

				while (*p != '\0')
				{
					r += putchar(*p);
					p++;	
				}
			}
			else if (*format == 'c')
			{
				int c = va_arg(args, int);
				r + putchar(c)

			}

		}
}
