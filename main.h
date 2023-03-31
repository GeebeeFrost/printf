#ifndef MAIN
#define MAIN

#include <stdarg.h>

/**
 * struct specifier - Struct to map specifier to function
 * @character: Specifier character
 * @func: Corresponding function
 */
typedef struct specifier
{
	char character;
	int (*func)(va_list);
} spec_t;

int _printf(const char *, ...);
int _putchar(char);
int _puts(char *);
int (*choose_function(const char))(va_list);
int print_c(va_list);
int print_s(va_list);
int print_int(va_list ap);
void print_number(int n);
int count_digits(int n);
char *convert_number(unsigned long int, int, int);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_lower_hexa(va_list);
int print_upper_hexa(va_list);

#endif
