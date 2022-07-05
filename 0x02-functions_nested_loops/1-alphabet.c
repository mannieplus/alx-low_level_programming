#include "main.h"

/**
 * print_alphabet - print lower case letter with void prototype
 *
 * Return: Always void
 *
 */

void print_alphabet(void)

{char lc;

	for (lc = 'a'; 'a' <= 'z'; lc++)
	{
	_putchar(lc);
	}
	_putchar('\n');

}
