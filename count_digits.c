#include "main.h"

/**
 * count_digits - counts passed
 * @n: parameter
 * Return: digit count
 */
int count_digits(int n)
{
	unsigned int number, d = 0;

	if (n < 0)
		number = n * -1;
	else
		number = n;
	while (number != 0)
	{
		number = number / 10;
		d++;
	}
	return (d);
}
