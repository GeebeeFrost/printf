#include <stdarg.h>
#include <stdlib.h>
#include "_printf.h"

/**
 * _printf - an implementation of the standard printf function
 * @format: a character string
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int count = 0;
	int (*f)(va_list);
	const char *cp;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	va_start(ap, format);
	for (cp = format; *cp != '\0'; cp++)
	{
		if (*cp == '%')
		{
			cp++;
			if (*cp == '%')
			{
				count += _putchar('%');
				continue;
			}
			f = choose_function(*cp);
			count += f(ap);
		}
		else
		{
			count += _putchar(*cp);
		}
	}
	va_end(ap);
	return (count);
}