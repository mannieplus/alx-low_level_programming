#include"main.h"

/**
 * _puts - Function name
 *
 * @str: string parameter of type s
 *
 * Return: Nothing
 *
 */

void _puts(char *str)

{

	int i;

	for (i = 0; *str != '\0'; ++str)
	{
		_putchar(*str + 0);
		i++;
	}
	_putchar('\n');
}
