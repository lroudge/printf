#include "holberton.h"

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklm NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	for (j = 0; s[j]; j++)
	{
		for (i = 0; i <= 52; i++)
		{
			if (s[j] == rot13[i])
			{
				_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}
