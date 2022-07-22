#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 *
 * Return: converted integer from string
 *
 */

int _atoi(char *s)

{

	unsigned int nmb = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			nmb = (nmb * 10) + (*s - '0');
		else if (nmb > 0)
			break;
	} while (*s++);

	return (nmb * sign);

}
