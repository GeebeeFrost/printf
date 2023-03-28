#ifndef PRINTF_H
#define PRINTF_H

int _printf(const char *format, ...);
int _putchar(char);
int (*choose_function(const char format))(va_list);
int print_c(va_list ap);
int print_s(va_list ap);

#endif
