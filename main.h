#ifndef MAIN__H__
#define MAIN__H__
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
unsigned int print_char(va_list arg);
unsigned int print_str(va_list arg);
unsigned int print_percent(char c);
void print_num(int n);
unsigned int print_int(va_list args);
int int_len(int n);

#endif
