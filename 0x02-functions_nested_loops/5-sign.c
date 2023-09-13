#include "main.h"
/**
 * _sign - "Prints '+' or '-' or '0' and returns 1 or -1 or 0 for positive, negative or zero values respectively"
 *
 * @n: Integer variable
 *
 * Return: Returns 1 for positive, 0 for zero and -1 for negative values.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n ==0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}	

