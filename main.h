#ifndef PRINT_F
#define PRINT_F


#include <stdlib.h>
#include <unistd.h>

/**
 * struct convert - defines a structure for symbol and structures
 *
 * @sym: the operator
 * @f: the function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/* main functions */
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_interger(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_interger(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/* helper function */

#endif
