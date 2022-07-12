#include "main.h"

/**
 * swap_int - Function name
 *
 * @a: takes input type of int
 *
 * @b: takes a second input type of int
 *
 * Function Swaps two int type values
 *
 * Return: void (if successful)
 *
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
