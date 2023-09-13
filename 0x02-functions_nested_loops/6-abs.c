#include "main.h"
/**
 * _abs - 'Prints absolute value of a number'
 *
 * Return: Returns the absolute value.
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n*1);
	}
	else
	{
		return (n*-1);
	}
}
