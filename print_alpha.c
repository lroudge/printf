#include "holberton.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int print_string(va_list l)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int print_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
