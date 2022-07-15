#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printf - a function that produces output according to a format
 * @format: const char string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int length = 0;
	va_list arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			if (*format == 'c')
			{
				len += print_char(arg);
			}
			else if (*format == 's')
			{
				len += print_str(arg);
			}
			else
			{
				_putchar(*--format);
				len++;
			}
		}
		else if (*format == '%')
		{
			len += print_percent(*format);
			format++;
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(arg);
	return (len);
}
