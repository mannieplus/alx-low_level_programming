#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: number as int
 *
 * Return: 1 if n is greater than zero
 * 0 is zer0
 * -1 is less than zero
 *
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
