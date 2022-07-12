#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printf - a function that produces output according to a format
 * @format: const char string
 * @return the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, size_buffer = 0;
	const char *str = format;
	char BUFFER[100] = {0};
	char *str_argument;
	va_list ptr_list;

	va_start(ptr_list, format);
	if (str == NULL)
		return (0);
	else
	{
		for (i = 0; *str != '\0'; i++)
		{
			if (*(str + i) == '%')
			{
				switch (str[i + (i + 1)])
				{
					case 'c':
						{
							BUFFER[size_buffer] = (char)va_arg(ptr_list, int);
							size_buffer++;
							break;
						}
					case 's':
						{
							str_argument = (char*)va_arg(ptr_list, char*);
							strcpy(&BUFFER[size_buffer], str_argument);
							size_buffer += strlen(str_argument);
							break;
						}
				}
				i++;
			}
			else
			{
				BUFFER[size_buffer] = str[i];
				size_buffer++;
			}
			i++;
		}
		fwrite(BUFFER, size_buffer, 1, stdout);
		va_end(ptr_list);
		return (size_buffer);
	}
}
