#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
char *convert(unsigned long int num, int base, int lowercase);
int _puts(char *str);
int (*get_print(char s))(va_list, flags_t *);
#endif
