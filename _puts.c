#include "main.h"

/**
 * _puts - print string
 * @string: input string
 *
 * Return: return
 */
int _puts(char *string)
{
	int contador = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		contador++;
	}
	return (contador);
}
