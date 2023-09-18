#include "main.h"

/**
 * print_rev: prints a string in the reverse order
 * @s: points to the string to be printed
 *
 * Return: returns a string in reverse
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	while (k--)
		_putchar(s[k]);
	_putchar('\n');
}
