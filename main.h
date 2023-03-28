#ifndef MAIN
#define MAIN

#include <stdarg.h>

/**
 * struct specifier - Struct to map specifier to function
 * @s: Specifier character
 * @f: Function
 */
typedef struct specifier
{
	char s;
	int (*f)(va_list);
} spec_t;

int _printf(const char *, ...);
int _putchar(char);
int (*choose_function(const char))(va_list);
int print_c(va_list);
int print_s(va_list);

#endif
