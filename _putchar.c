#include "main.h"
#include <unistd.h>
/**
 * _putchar - print a character
 * @c: The character to print
 * Return: a value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
