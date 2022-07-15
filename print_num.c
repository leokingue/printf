#include "main.h"
/**
 * print_num - prints digits of int using putchar
 * @n: int to print
 * Return: void
 */
void print_num(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n / 10)
	{
		print_num(n / 10);
	}
	_putchar('0' + n % 10);
}
