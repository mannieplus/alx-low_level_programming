#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid password
 *
 * Return: returns int;
 *
 */

int main(void)

{

	char ch;
	int n;

	srand(time(0));

	while (n <= 2645)
	{
		ch = rand() % 128;
		n += ch;
		putchar(ch);
	}
	putchar(2772 - n);
	return (0);
}
