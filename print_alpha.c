#include "holberton.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
unsigned int print_string(va_list l)
{
	unsigned int i = 0;
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";
	while (s[i])
		_putchar(s[i++]);
	return (i);
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
unsigned int print_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
