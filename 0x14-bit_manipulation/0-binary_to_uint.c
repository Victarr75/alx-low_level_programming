#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The unsigned integer representation of the binary string.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int number;

	number = 0;

	if (!b)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	for (index = 0; b[index] != '\0'; index++)
	{
		number <<= 1;
		if (b[index] == '1')
			number += 1;
	}

	return (number);
}
