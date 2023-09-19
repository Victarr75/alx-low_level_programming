#include "main.h"

/**
 * puts_haif - prints the second haif of a string
 * Description: prints the second haif of a string
 * @str: the string to be printed
 *
 */

void puts_half(char *str)
{
	int full_string, haif_string;

	full_string = 0;
	while (str[full_string] != '\0')
		full_string++;

	haif_string = full_string / 2;

	if (full_string % 2 == 0)
		haif_string++;

	while (haif_string < full_string)
	{
		_putchar(str[haif_string]);
		haif_string++;
	}
	_putchar('\n');
}
