#include "main.h"

/**
 * printc - prints char
 * @pa: char format
 * @format: format char
 *
 * Return: 1
 */
int printc(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
