#include "main.h"
/**
 * print_int - prints an int from va_list
 * @args: variable arg list
 * Return: number of digits in the int
 */
unsigned int print_int(va_list args)
{
	unsigned int len = 0;
	int num;

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		len++;
	}
	print_num(num);
	len += int_len(num);
	return (len);
}
