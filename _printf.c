#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * in a formatted string
 * @format:format is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_interger},
		{"i", print_interger},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_interger},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	/* calling parser functio  */
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
