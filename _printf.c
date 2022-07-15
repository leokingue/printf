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
	va_list vl;
	int i, j = 0;
	char buff[100] = {0};
	char *str_arg;

	va_start(vl, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			switch (str[i])
			{
				case 'c':
					{
						buff[j] = (char)va_arg(vl, int);
						j++;
						break;
					}
				case 's':
					{
						str_arg = va_arg(vl, char*);
						strcpy(&buff[j], str_arg);
						j += strlen(str_arg);
						break;
					}
				case ' ':
					{
						buff[j] = '%';
						j++;
						break;
					}
			}
		}
		else
		{
			buff[j] = str[i];
			j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout);
	va_end(vl);
	return (j);
}
