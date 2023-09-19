#include "main.h"

/**
 * _strcp - copies the string pointed to by the source
 * @dest: character type string
 * @src: character type string
 * Description: copy the string pointed to
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
