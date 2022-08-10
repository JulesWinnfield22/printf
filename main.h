#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

struct operation {
	char flag;
	int (*func)(va_list);
};

int (*get_func(char c))(va_list);
int _putchar(char c);
int print_string(va_list);
int print_int(va_list);
int print_char(va_list);
int _printf(const char *format, ...);
#endif /* MAIN_H */

