#include "main.h"



/**
 * _isalpha - Check for alphabetical characters
 *
 * @p: ASCII code
 *
 * Return: Always 1 for letter
 *
 */

int _isalpha(int p)

{
		if ((p >= 97 && p <= 122) || (p >= 65 && p <= 90))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		_putchar('\n');
}
