#include "main.h"
/**
 * print_str: print a string
 * @arg: variable list
 * Return: length of string
 */
unsigned int print_str(va_list arg)
{
	unsigned int i = 0;
	char *str;

	str = va_arg(arg, char*);
	while (*str)
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
