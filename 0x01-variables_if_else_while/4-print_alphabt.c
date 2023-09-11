#include <stdio.h>
/**
 * main - entry point
 * description: "print lowercase without q,e"
 * return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
    {
	    if (letter != 'e' && letter != 'q')
	    {
		    putchar(letter);
	    }
    }
	putchar('\n');
	return (0);
}

