#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct types - specifier structure for printf
 * @p: pointer to character specifier
 * @func: function pointer to point function
 */
typedef struct types
{
	char p;
	int (*func)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int printc(va_list l);
int print_string(va_list s);
int (*cmp_func(const char a))(va_list);
int print_n(va_list n);

#endif
