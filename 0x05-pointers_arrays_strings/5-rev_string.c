#include "main.h"

/**
 *
 */

void rev_string(char *s)
{
	int length, z, haif;
	char temp;

	for (length = 0; s[lenght] != '\0'; length++);
	z = 0;
	haif = length / 2;

	while (haif--)
	{
		temp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}

