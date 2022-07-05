#include "main.h"



/**
 *_islower - check for lowercase
 * @lc: ASCII code
 * Return: Always 1 (if Successful)
 *
 */

int _islower(int lc)

{

	if (lc >= 'a' && lc <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
