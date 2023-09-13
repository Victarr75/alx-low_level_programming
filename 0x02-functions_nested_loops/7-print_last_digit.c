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
	putchar(b % 10);
	return(b % 10);
}

