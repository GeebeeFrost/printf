#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * choose_function - Selects function to call
 * based on specifier
 * @format: Specifier character
 *
 * Return: Pointer to the function to be called
 */
int (*choose_function(const char format))(va_list)
{
	unsigned int i;
	spec_t options[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};

	for (i = 0; options[i].s != '\0'; i++)
	{
		if ((options[i].s) == format)
			return (options[i].f);
	}
	return (NULL);
}
