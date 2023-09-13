#include "main.h"
/**
 * print_sign - "Ches and Prints '+' or '-' or '0' in integers"
 *
 * @n: Integer variable
 *
 * Return: Returns 1 for positive, 0 for zero and -1 for negative values.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

