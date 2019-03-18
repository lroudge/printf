#include "holberton.h"

/**
 * print_bigS - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int print_bigS(va_list l)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (_atoi(res) <= 16)
			{
				_putchar('0');
				count++;
			}
			_printf(res);
			count++;
		}
		else
			_putchar(s[i]);
	}
	return (count);
}

/**
 * isDigit - returns true if i is a number
 * @i: integer i
 * Return: true if number, false if not
 */
int isDigit(int i)
{
	return (i >= '0' && i <= '9');
}

/**
 * _atoi - converts a string to integer
 * @s: string s
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
	int res = 0;
	int negs = 0;
	int foundNumber = 0;
	int multiplier = 1;

	while (*s)
	{
		if (!isDigit(*s) && foundNumber)
			break;
		if (*s == '-')
			negs++;
		else if (isDigit(*s))
		{
			foundNumber = 1;
			if (negs % 2)
				multiplier = -1;
			res = res * 10 + (*s - 48) * multiplier;
		}
		s++;
	}
	return (res);
}
