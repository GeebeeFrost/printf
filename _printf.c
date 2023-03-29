#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - an implementation of the standard printf function
 * @format: a character string
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int num_count = 0;
	int (*f)(va_list);
	const char *cp;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	va_start(arg, format);
	for (cp = format; *cp != '\0'; cp++)
	{
		if (*cp == '%')
		{
			cp++;
			if (*cp == '%')
			{
				num_count += _putchar('%');
				continue;
			}
			f = choose_function(*cp);
			num_count += (f) ? f(arg) : _printf("%%%c", *cp);
		}
		else
		{
			num_count += _putchar(*cp);
		}
	}
	va_end(arg);
	return (num_count);
}
