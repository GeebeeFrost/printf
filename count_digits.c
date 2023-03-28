#include "main.h"
#include <stdio.h>
/**
 * count_digits - counts passed
 * @n: parameter
 * Return: digit count
 */
int count_digits(int n)
{
	unsigned int num, d = 0;

	if (n < 0)
		num = n * -1;
	else
		num = n;
	while (num != 0)
	{
		num = num / 10;
		d++;
	}
	return (d);
}
