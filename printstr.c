#include "main.h"

/**
 * printstr- print
 * @pa: list
 * @format: format
 *
 * Return: count
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador;
	(void)format;

	if (string == NULL)
		string = "(null)";
	contador = _puts(string);
	return (contador);
}
