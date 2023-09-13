#include "main.h"
/**
 * _islower - Shows 1 if the input is lowercase. Otherwise, shows 0.
 *
 * @c: The character in ASCII code
 *
 * Return: Returns 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	_putchar('\n);
}
