#include "main.h"

/**
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	unsigned int x, number = 0, string = 0;
	va_list args;

	va_start (arg,form);

	for (x = 0; form[x] != '\0'; x++)
	{
		if (form[i] != '%')
		{
			put_char(form[x]);
		}
		else if (form[x] == '%' && form[x + 1] == 'c')
		{
		put_char(va_arg(args, int));
		x++;
		}
		else if (format[x + 1] == 's')
		{
			string = puts(va_arg(args, char *));
			x++;
			number += (string - 1);
		}
		else if (format[x] == '%')
		{
			put_char('&');
		}
		number++;
	}
	va_end(args);
	return (number)
		
}
