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
	unsigned int (*f)(va_list ap);
} ph;

int _printf(const char *fmt, ...);
unsigned int (*get_print(char s))();
unsigned int print_string(va_list l);
unsigned int print_char(va_list l);
unsigned int print_int(va_list l);
unsigned int print_number(int n);
unsigned int print_unsigned(va_list l);
unsigned int print_unsigned_number(unsigned int n);
unsigned int print_hex(va_list l);
unsigned int print_hex_big(va_list l);
unsigned int print_binary(va_list l);
unsigned int print_octal(va_list l);
char *convert(unsigned int num, int base, int lowercase);
unsigned int _putchar(char c);
unsigned int count_digit(int i);
int _strcmp(const char *s1, const char *s2);

#endif
