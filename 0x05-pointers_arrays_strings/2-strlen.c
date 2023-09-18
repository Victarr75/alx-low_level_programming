#include "main.h"

/**
 * _strlen - a function that computes length of a string.
 *
 * @s: string variable
 *
 * Return: string's length
 */

int _strlen(char *s)
{
	int lng = 0;

	while (s[lng])
		lng++;
	return (lng);
}
