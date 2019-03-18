#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list);
	const char *p;
	int count = 0;
	va_list arguments;

	va_start(arguments, fmt);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				_putchar('%');
				count++;
				continue;
			}
			pfunc = get_print(*p);
			if (!pfunc)
			{
				_putchar('%');
				_putchar(*p);
				count += 2;
			} else
				count += pfunc(arguments);
		} else
		{
			count++;
			_putchar(*p);
		}
	}
	va_end(arguments);
	return (count);
}
