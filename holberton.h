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

int print_int(va_list l);
void print_number(int n);
int print_unsigned(va_list l);
void print_unsigned_number(unsigned int n);
int print_hex(va_list l);
int print_hex_big(va_list l);
int print_binary(va_list l);
int print_octal(va_list l);
char *convert(unsigned int num, int base, int lowercase);
int count_digit(int i);
int _printf(const char *fmt, ...);
int (*get_print(char s))(va_list);
int print_string(va_list l);
int print_char(va_list l);
int _putchar(char c);

#endif
