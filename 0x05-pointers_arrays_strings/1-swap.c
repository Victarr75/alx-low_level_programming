#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 
 * @a: address of the first value
 *
 * @b: address of the second value
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
