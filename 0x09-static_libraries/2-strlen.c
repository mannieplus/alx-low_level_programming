#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function name
 *
 * @s: argument of type char
 *
 * Gets the length of a character
 *
 * Return: Int, count of the character
 *
 */

int _strlen(char *s)

{

	int i;

	for (i = 0; *s != '\0'; ++s)
		++i;

	return (i);
}
