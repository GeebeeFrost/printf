#include <stdio.h>
#include "main.h"
/**
 * print_int - prints integer
 * @ap: parameter
 *
 * Return: Number of digits printed
 */
int print_int(va_list ap)
{
	int count;
	int n = va_arg(ap, int);

	count = count_digits(n);
	if (n <= 0)
		count++;
	print_number(n);
	return (count);
}

/**
 * print_number - prints a number
 * @n: number count
 */
void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = n * -1;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
