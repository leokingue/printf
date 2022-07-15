#ifndef MAIN__H__
#define MAIN__H__
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
unsigned int print_char(va_list arg);
unsigned int print_str(va_list arg);
unsigned int print_percent(char c);

#endif
