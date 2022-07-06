#include "main.h"

/**
 * print_last_digit - print_last_digit
 *
 *
 * @p: number as int
 *
 *  Return: last digit
 *
 */

int print_last_digit(int p)

{int n;

	n = p % 10;
	if (n < 0)
		n = -n;
	_putchar(n + 48);
	return (n);
}
