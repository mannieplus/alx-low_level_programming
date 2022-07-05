#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (if successful)
 */
int main(void)
{char ch[9] = "_putchar";
int k;

	for (k = 0; k < 8; k = k + 1)
	{
		_putchar(ch[k]);
	}
	_putchar('\n');
	return (0);

}
