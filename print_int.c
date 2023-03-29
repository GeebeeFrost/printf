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
	int num_count;
	int n = va_arg(ap, int);

	num_count = count_digits(n);
	if (n <= 0)
		num_count++;
	print_number(n);
	return (num_count);
}

/**
 * print_number - prints a number
 * @n: number count
 */
void print_number(int n)
{
	unsigned int m = 0;

	if (n < 0)
	{
		m = n * -1;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
