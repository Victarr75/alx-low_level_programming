#include "main.h"
/**
 * print_last_digit - 'Prints the last digit of an integer'
 *
 * @b: integer argument
 *
 * Return: returns the last digit
 */
int print_last_digit(int b)
{
	int c;

	c = b % 10;
	if (c >= 0)
	{
		_putchar(c + '0');
		return (c + '0');
	}
	else
	{
		_putchar((c * -1) + '0');
		return ((c * -1) + '0');
	}
}
