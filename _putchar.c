#include "main.h"

/**
 * _write_char - write the character c to stdout
 * @c: character to print
 * Return: 1 on success
 * on error -1
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
