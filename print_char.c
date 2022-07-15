#include "main.h"
/**
 * print_char - print a char
 * @arg: var_list element
 * Return: length element
 */
unsigned int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
