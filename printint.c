#include "main.h"

/**
 * _abs - calculates absolute value
 * @number: input
 *
 * Return: output
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * contadordigit - counts digits
 * @number: input
 *
 * Return: count
 */
int contadordigit(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;

	while (_abs(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}

/**
 * integer - prints integer
 * @number: input
 *
 * Return: count
 */
int integer(int number)
{
	unsigned int unint;
	int count;

	count = contadordigit(number);
	if (number < 0)
	{
		_putchar('-');
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * printint - prints integer
 * @format: format to print
 * @pa: list
 *
 * Return: count
 */
int printint(char *format, va_list pa)
{
	int number = va_arg(pa, int);
	int numero;
	(void)format;

	numero = integer(number);

	return (numero);
}
