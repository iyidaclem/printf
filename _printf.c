#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
*_printf - A function that produces output according to a format.
*@format: Format specifier
*Return: Length of the print string
*/

int _printf(const char *format, ...)
{
	int len;
	va_list ap;

	int (*get_func)(va_list);

	va_start(ap, format);
	len = 0;
	if (!format)
		return (-1);
	while (*format != '\0')
	{
		if (*format  == '%')
		{
			format++;
			get_func = get_op_func(*format);
			if (get_func)
				len += get_func(ap);
		}
		else
		{
			 _putchar(*format);
			 format++;
			 len++;
		}
	}
	va_end(ap);
	return (len);
}
