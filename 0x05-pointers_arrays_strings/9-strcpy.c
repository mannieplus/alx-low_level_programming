#include "main.h"
#include <stdio.h>


/**
 * _strcpy - Function name
 *
 *  copies a string from one pointer to another
 *
 *  including the terminating null byte (\0)
 *
 *  @dest: first args
 *
 * @src: second args
 *
 * Return: returns char pointer;
 *
 */


char *_strcpy(char *dest, char *src)

{

	int p, q = 0;

	for (p = 0; src[p] != '\0'; ++a)
	{
		dest[q] = src[p];
		++q;
	}
	dest[q] = '\0';

	return (dest);
}
