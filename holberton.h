#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap);
} ph;

int _printf(const char *fmt, ...);
int (*get_print(char s))(va_list);
int print_string(va_list l);
int print_char(va_list l);
int _putchar(char c);

#endif
