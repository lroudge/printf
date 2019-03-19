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

/* print_nums */
int print_int(va_list l);
void print_number(int n);
int print_unsigned(va_list l);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l);
int print_hex_big(va_list l);
int print_binary(va_list l);
int print_octal(va_list l);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *fmt, ...);

/* get_print */
int (*get_print(char s))(va_list);

/* print_alpha */
int print_string(va_list l);
int print_char(va_list l);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l);
int print_rev(va_list l);
int print_bigS(va_list l);

#endif
